#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

/* Yuck. (So Perl can get at the IW_MODE_* constants) */
#include <linux/wireless.h>

#include <tx80211.h>
#include <tx80211_errno.h>

#include "const-c.inc"

typedef struct tx80211 Net_Lorcon;

MODULE = Net::Lorcon		PACKAGE = Net::Lorcon		

INCLUDE: const-xs.inc

MODULE = Net::Lorcon		PACKAGE = Net::Lorcon		PREFIX = tx80211_

void
tx80211_getcardlist()
  INIT:
    int i;
    struct tx80211_cardlist *cardlist;

  PPCODE:
    cardlist = tx80211_getcardlist();

    if (cardlist)
    {
      EXTEND(SP, cardlist->num_cards);
      for (i = 1; i < cardlist->num_cards; i++) {
        PUSHs(sv_2mortal(newSVpv(cardlist->cardnames[i], 0)));
      }

      tx80211_freecardlist(cardlist);
    }

int
tx80211_resolvecard(card)
  char *card

Net_Lorcon*
tx80211__new(in_ifname, in_injector)
    const char *in_ifname
    int in_injector
  INIT:
    Net_Lorcon *in_tx = malloc(sizeof *in_tx);
    memset(in_tx, '\0', sizeof *in_tx);
  CODE:
    if(tx80211_init(in_tx, in_ifname, in_injector) < 0) {
      free(in_tx);
      in_tx = NULL;
    }
    RETVAL = in_tx;
  OUTPUT:
    RETVAL

void tx80211_DESTROY(in_tx)
    Net_Lorcon *in_tx
  CODE:
    tx80211_close(in_tx);
    free(in_tx);

int
tx80211_getcapabilities(in_tx)
    Net_Lorcon *in_tx

int
tx80211_open(in_tx)
    Net_Lorcon *in_tx

int
tx80211_close(in_tx)
    Net_Lorcon *in_tx

int
tx80211_setmode(in_tx, in_mode)
    Net_Lorcon *in_tx
    int in_mode

int
tx80211_getmode(in_tx)
    Net_Lorcon *in_tx

int
tx80211_setfunctionalmode(in_tx, in_fmode)
    Net_Lorcon *in_tx
    int in_fmode

int
tx80211_setchannel(in_tx, in_chan)
    Net_Lorcon *in_tx
    int in_chan

# WTF?! - The header file calls it getchannel, but it's actually getchan..
int
tx80211_getchan(in_tx)
    Net_Lorcon *in_tx

int
tx80211_txpacket(in_tx, in_sv)
    Net_Lorcon *in_tx
    SV *in_sv
  INIT:
    STRLEN len;
    uint8_t *data = SvPV(in_sv, len);

    struct tx80211_packet packet = {
      .packet = data,
      .plen = len
    };

  CODE:
    RETVAL = tx80211_txpacket(in_tx, &packet);
  OUTPUT:
    RETVAL

