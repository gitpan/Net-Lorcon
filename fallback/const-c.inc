#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_10 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     INJ_HOSTAP INJ_RT2500 INJ_RT2570 INJ_WLANNG */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case '0':
    if (memEQ(name, "INJ_RT2500", 10)) {
    /*                       ^        */
#ifdef INJ_RT2500
      *iv_return = INJ_RT2500;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '7':
    if (memEQ(name, "INJ_RT2570", 10)) {
    /*                       ^        */
#ifdef INJ_RT2570
      *iv_return = INJ_RT2570;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "INJ_HOSTAP", 10)) {
    /*                       ^        */
#ifdef INJ_HOSTAP
      *iv_return = INJ_HOSTAP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "INJ_WLANNG", 10)) {
    /*                       ^        */
#ifdef INJ_WLANNG
      *iv_return = INJ_WLANNG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     INJ_AIRJACK INJ_AIRPCAP INJ_BCM43XX INJ_PRISM54 INJ_RTL8180 */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case '1':
    if (memEQ(name, "INJ_RTL8180", 11)) {
    /*                       ^         */
#ifdef INJ_RTL8180
      *iv_return = INJ_RTL8180;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "INJ_BCM43XX", 11)) {
    /*                       ^         */
#ifdef INJ_BCM43XX
      *iv_return = INJ_BCM43XX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "INJ_AIRJACK", 11)) {
    /*                       ^         */
#ifdef INJ_AIRJACK
      *iv_return = INJ_AIRJACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "INJ_AIRPCAP", 11)) {
    /*                       ^         */
#ifdef INJ_AIRPCAP
      *iv_return = INJ_AIRPCAP;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "INJ_PRISM54", 11)) {
    /*                       ^         */
#ifdef INJ_PRISM54
      *iv_return = INJ_PRISM54;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_12 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     INJ_MAC80211 INJ_NODRIVER INJ_ZD1211RW */
  /* Offset 4 gives the best switch position.  */
  switch (name[4]) {
  case 'M':
    if (memEQ(name, "INJ_MAC80211", 12)) {
    /*                   ^              */
#ifdef INJ_MAC80211
      *iv_return = INJ_MAC80211;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "INJ_NODRIVER", 12)) {
    /*                   ^              */
#ifdef INJ_NODRIVER
      *iv_return = INJ_NODRIVER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Z':
    if (memEQ(name, "INJ_ZD1211RW", 12)) {
    /*                   ^              */
#ifdef INJ_ZD1211RW
      *iv_return = INJ_ZD1211RW;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_16 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_CTRL TX80211_CAP_FRAG TX80211_CAP_NONE TX80211_RTAP_LEN */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'L':
    if (memEQ(name, "TX80211_RTAP_LEN", 16)) {
    /*                            ^         */
#ifdef TX80211_RTAP_LEN
      *iv_return = TX80211_RTAP_LEN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "TX80211_CAP_NONE", 16)) {
    /*                            ^         */
#ifdef TX80211_CAP_NONE
      *iv_return = TX80211_CAP_NONE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "TX80211_CAP_FRAG", 16)) {
    /*                            ^         */
#ifdef TX80211_CAP_FRAG
      *iv_return = TX80211_CAP_FRAG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "TX80211_CAP_CTRL", 16)) {
    /*                            ^         */
#ifdef TX80211_CAP_CTRL
      *iv_return = TX80211_CAP_CTRL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_17 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_DURID TX80211_CAP_SNIFF TX80211_MODE_AUTO */
  /* Offset 16 gives the best switch position.  */
  switch (name[16]) {
  case 'D':
    if (memEQ(name, "TX80211_CAP_DURI", 16)) {
    /*                               D      */
#ifdef TX80211_CAP_DURID
      *iv_return = TX80211_CAP_DURID;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "TX80211_CAP_SNIF", 16)) {
    /*                               F      */
#ifdef TX80211_CAP_SNIFF
      *iv_return = TX80211_CAP_SNIFF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "TX80211_MODE_AUT", 16)) {
    /*                               O      */
#ifdef TX80211_MODE_AUTO
      *iv_return = TX80211_MODE_AUTO;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_DSSSTX TX80211_CAP_MIMOTX TX80211_CAP_OFDMTX
     TX80211_MODE_ADHOC TX80211_MODE_INFRA TX80211_STATUS_MAX */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'F':
    if (memEQ(name, "TX80211_MODE_INFRA", 18)) {
    /*                              ^         */
#ifdef TX80211_MODE_INFRA
      *iv_return = TX80211_MODE_INFRA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "TX80211_MODE_ADHOC", 18)) {
    /*                              ^         */
#ifdef TX80211_MODE_ADHOC
      *iv_return = TX80211_MODE_ADHOC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "TX80211_CAP_OFDMTX", 18)) {
    /*                              ^         */
#ifdef TX80211_CAP_OFDMTX
      *iv_return = TX80211_CAP_OFDMTX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TX80211_STATUS_MAX", 18)) {
    /*                              ^         */
#ifdef TX80211_STATUS_MAX
      *iv_return = TX80211_STATUS_MAX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "TX80211_CAP_MIMOTX", 18)) {
    /*                              ^         */
#ifdef TX80211_CAP_MIMOTX
      *iv_return = TX80211_CAP_MIMOTX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "TX80211_CAP_DSSSTX", 18)) {
    /*                              ^         */
#ifdef TX80211_CAP_DSSSTX
      *iv_return = TX80211_CAP_DSSSTX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_19 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_BSSTIME TX80211_CAP_SELFACK TX80211_CAP_SETRATE
     TX80211_MODE_MASTER TX80211_MODE_REPEAT TX80211_MODE_SECOND */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'C':
    if (memEQ(name, "TX80211_MODE_SECOND", 19)) {
    /*                              ^          */
#ifdef TX80211_MODE_SECOND
      *iv_return = TX80211_MODE_SECOND;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "TX80211_CAP_SELFACK", 19)) {
    /*                              ^          */
#ifdef TX80211_CAP_SELFACK
      *iv_return = TX80211_CAP_SELFACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "TX80211_MODE_REPEAT", 19)) {
    /*                              ^          */
#ifdef TX80211_MODE_REPEAT
      *iv_return = TX80211_MODE_REPEAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "TX80211_CAP_SETRATE", 19)) {
    /*                              ^          */
#ifdef TX80211_CAP_SETRATE
      *iv_return = TX80211_CAP_SETRATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "TX80211_MODE_MASTER", 19)) {
    /*                              ^          */
#ifdef TX80211_MODE_MASTER
      *iv_return = TX80211_MODE_MASTER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "TX80211_CAP_BSSTIME", 19)) {
    /*                              ^          */
#ifdef TX80211_CAP_BSSTIME
      *iv_return = TX80211_CAP_BSSTIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_20 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_SNIFFACK TX80211_CAP_TRANSMIT TX80211_CAP_TXNOWAIT
     TX80211_MODE_MONITOR TX80211_RTAP_PRESENT */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
  case 'M':
    if (memEQ(name, "TX80211_MODE_MONITOR", 20)) {
    /*                            ^             */
#ifdef TX80211_MODE_MONITOR
      *iv_return = TX80211_MODE_MONITOR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "TX80211_CAP_SNIFFACK", 20)) {
    /*                            ^             */
#ifdef TX80211_CAP_SNIFFACK
      *iv_return = TX80211_CAP_SNIFFACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "TX80211_RTAP_PRESENT", 20)) {
    /*                            ^             */
#ifdef TX80211_RTAP_PRESENT
      *iv_return = TX80211_RTAP_PRESENT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "TX80211_CAP_TRANSMIT", 20)) {
    /*                            ^             */
#ifdef TX80211_CAP_TRANSMIT
      *iv_return = TX80211_CAP_TRANSMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "TX80211_CAP_TXNOWAIT", 20)) {
    /*                            ^             */
#ifdef TX80211_CAP_TXNOWAIT
      *iv_return = TX80211_CAP_TXNOWAIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_25 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_SETMODULATION TX_IEEE80211_RADIOTAP_EXT
     TX_IEEE80211_RADIOTAP_FCS */
  /* Offset 22 gives the best switch position.  */
  switch (name[22]) {
  case 'E':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_EXT", 25)) {
    /*                                     ^         */
#ifdef TX_IEEE80211_RADIOTAP_EXT
      *iv_return = TX_IEEE80211_RADIOTAP_EXT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_FCS", 25)) {
    /*                                     ^         */
#ifdef TX_IEEE80211_RADIOTAP_FCS
      *iv_return = TX_IEEE80211_RADIOTAP_FCS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "TX80211_CAP_SETMODULATION", 25)) {
    /*                                     ^         */
#ifdef TX80211_CAP_SETMODULATION
      *iv_return = TX80211_CAP_SETMODULATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_26 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX_IEEE80211_RADIOTAP_FHSS TX_IEEE80211_RADIOTAP_RATE
     TX_IEEE80211_RADIOTAP_TSFT */
  /* Offset 22 gives the best switch position.  */
  switch (name[22]) {
  case 'F':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_FHSS", 26)) {
    /*                                     ^          */
#ifdef TX_IEEE80211_RADIOTAP_FHSS
      *iv_return = TX_IEEE80211_RADIOTAP_FHSS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_RATE", 26)) {
    /*                                     ^          */
#ifdef TX_IEEE80211_RADIOTAP_RATE
      *iv_return = TX_IEEE80211_RADIOTAP_RATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_TSFT", 26)) {
    /*                                     ^          */
#ifdef TX_IEEE80211_RADIOTAP_TSFT
      *iv_return = TX_IEEE80211_RADIOTAP_TSFT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_34 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX_IEEE80211_RADIOTAP_DBM_ANTNOISE TX_IEEE80211_RADIOTAP_DBM_TX_POWER
     TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL TX_IEEE80211_RADIOTAP_LOCK_QUALITY */
  /* Offset 27 gives the best switch position.  */
  switch (name[27]) {
  case 'N':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_DBM_ANTNOISE", 34)) {
    /*                                          ^             */
#ifdef TX_IEEE80211_RADIOTAP_DBM_ANTNOISE
      *iv_return = TX_IEEE80211_RADIOTAP_DBM_ANTNOISE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'Q':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_LOCK_QUALITY", 34)) {
    /*                                          ^             */
#ifdef TX_IEEE80211_RADIOTAP_LOCK_QUALITY
      *iv_return = TX_IEEE80211_RADIOTAP_LOCK_QUALITY;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL", 34)) {
    /*                                          ^             */
#ifdef TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL
      *iv_return = TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'X':
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_DBM_TX_POWER", 34)) {
    /*                                          ^             */
#ifdef TX_IEEE80211_RADIOTAP_DBM_TX_POWER
      *iv_return = TX_IEEE80211_RADIOTAP_DBM_TX_POWER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!/usr/bin/perl -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(INJ_AIRJACK INJ_AIRPCAP INJ_BCM43XX INJ_HOSTAP INJ_MAC80211
	       INJ_MADWIFING INJ_MADWIFIOLD INJ_MAX INJ_NODRIVER INJ_PRISM54
	       INJ_RT2500 INJ_RT2570 INJ_RT61 INJ_RT73 INJ_RTL8180 INJ_WLANNG
	       INJ_ZD1211RW MAX_IFNAME_LEN TX80211_CAP_BSSTIME TX80211_CAP_CTRL
	       TX80211_CAP_DSSSTX TX80211_CAP_DURID TX80211_CAP_FRAG
	       TX80211_CAP_MIMOTX TX80211_CAP_NONE TX80211_CAP_OFDMTX
	       TX80211_CAP_SELFACK TX80211_CAP_SEQ TX80211_CAP_SETMODULATION
	       TX80211_CAP_SETRATE TX80211_CAP_SNIFF TX80211_CAP_SNIFFACK
	       TX80211_CAP_TRANSMIT TX80211_CAP_TXNOWAIT
	       TX80211_FUNCMODE_INJECT TX80211_FUNCMODE_INJMON
	       TX80211_FUNCMODE_RFMON TX80211_MODE_ADHOC TX80211_MODE_AUTO
	       TX80211_MODE_INFRA TX80211_MODE_MASTER TX80211_MODE_MONITOR
	       TX80211_MODE_REPEAT TX80211_MODE_SECOND TX80211_RTAP_LEN
	       TX80211_RTAP_PRESENT TX80211_STATUS_MAX
	       TX_IEEE80211_RADIOTAP_ANTENNA TX_IEEE80211_RADIOTAP_CHANNEL
	       TX_IEEE80211_RADIOTAP_DBM_ANTNOISE
	       TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL
	       TX_IEEE80211_RADIOTAP_DBM_TX_POWER
	       TX_IEEE80211_RADIOTAP_DB_ANTNOISE
	       TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL
	       TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION
	       TX_IEEE80211_RADIOTAP_EXT TX_IEEE80211_RADIOTAP_FCS
	       TX_IEEE80211_RADIOTAP_FHSS TX_IEEE80211_RADIOTAP_FLAGS
	       TX_IEEE80211_RADIOTAP_LOCK_QUALITY TX_IEEE80211_RADIOTAP_RATE
	       TX_IEEE80211_RADIOTAP_TSFT TX_IEEE80211_RADIOTAP_TX_ATTENUATION),
            {name=>"", type=>"IV"});

print constant_types(); # macro defs
foreach (C_constant ("Net::Lorcon", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "#### XS Section:\n";
print XS_constant ("Net::Lorcon", $types);
__END__
   */

  switch (len) {
  case 0:
    {
      *iv_return = ;
      return PERL_constant_ISIV;
    }
    break;
  case 7:
    if (memEQ(name, "INJ_MAX", 7)) {
#ifdef INJ_MAX
      *iv_return = INJ_MAX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 8:
    /* Names all of length 8.  */
    /* INJ_RT61 INJ_RT73 */
    /* Offset 6 gives the best switch position.  */
    switch (name[6]) {
    case '6':
      if (memEQ(name, "INJ_RT61", 8)) {
      /*                     ^       */
#ifdef INJ_RT61
        *iv_return = INJ_RT61;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case '7':
      if (memEQ(name, "INJ_RT73", 8)) {
      /*                     ^       */
#ifdef INJ_RT73
        *iv_return = INJ_RT73;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    return constant_12 (aTHX_ name, iv_return);
    break;
  case 13:
    if (memEQ(name, "INJ_MADWIFING", 13)) {
#ifdef INJ_MADWIFING
      *iv_return = INJ_MADWIFING;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 14:
    /* Names all of length 14.  */
    /* INJ_MADWIFIOLD MAX_IFNAME_LEN */
    /* Offset 9 gives the best switch position.  */
    switch (name[9]) {
    case 'E':
      if (memEQ(name, "MAX_IFNAME_LEN", 14)) {
      /*                        ^           */
#ifdef MAX_IFNAME_LEN
        *iv_return = MAX_IFNAME_LEN;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'F':
      if (memEQ(name, "INJ_MADWIFIOLD", 14)) {
      /*                        ^           */
#ifdef INJ_MADWIFIOLD
        *iv_return = INJ_MADWIFIOLD;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 15:
    if (memEQ(name, "TX80211_CAP_SEQ", 15)) {
#ifdef TX80211_CAP_SEQ
      *iv_return = TX80211_CAP_SEQ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    return constant_17 (aTHX_ name, iv_return);
    break;
  case 18:
    return constant_18 (aTHX_ name, iv_return);
    break;
  case 19:
    return constant_19 (aTHX_ name, iv_return);
    break;
  case 20:
    return constant_20 (aTHX_ name, iv_return);
    break;
  case 22:
    if (memEQ(name, "TX80211_FUNCMODE_RFMON", 22)) {
#ifdef TX80211_FUNCMODE_RFMON
      *iv_return = TX80211_FUNCMODE_RFMON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 23:
    /* Names all of length 23.  */
    /* TX80211_FUNCMODE_INJECT TX80211_FUNCMODE_INJMON */
    /* Offset 22 gives the best switch position.  */
    switch (name[22]) {
    case 'N':
      if (memEQ(name, "TX80211_FUNCMODE_INJMO", 22)) {
      /*                                     N      */
#ifdef TX80211_FUNCMODE_INJMON
        *iv_return = TX80211_FUNCMODE_INJMON;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'T':
      if (memEQ(name, "TX80211_FUNCMODE_INJEC", 22)) {
      /*                                     T      */
#ifdef TX80211_FUNCMODE_INJECT
        *iv_return = TX80211_FUNCMODE_INJECT;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 25:
    return constant_25 (aTHX_ name, iv_return);
    break;
  case 26:
    return constant_26 (aTHX_ name, iv_return);
    break;
  case 27:
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_FLAGS", 27)) {
#ifdef TX_IEEE80211_RADIOTAP_FLAGS
      *iv_return = TX_IEEE80211_RADIOTAP_FLAGS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 29:
    /* Names all of length 29.  */
    /* TX_IEEE80211_RADIOTAP_ANTENNA TX_IEEE80211_RADIOTAP_CHANNEL */
    /* Offset 22 gives the best switch position.  */
    switch (name[22]) {
    case 'A':
      if (memEQ(name, "TX_IEEE80211_RADIOTAP_ANTENNA", 29)) {
      /*                                     ^             */
#ifdef TX_IEEE80211_RADIOTAP_ANTENNA
        *iv_return = TX_IEEE80211_RADIOTAP_ANTENNA;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'C':
      if (memEQ(name, "TX_IEEE80211_RADIOTAP_CHANNEL", 29)) {
      /*                                     ^             */
#ifdef TX_IEEE80211_RADIOTAP_CHANNEL
        *iv_return = TX_IEEE80211_RADIOTAP_CHANNEL;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 33:
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_DB_ANTNOISE", 33)) {
#ifdef TX_IEEE80211_RADIOTAP_DB_ANTNOISE
      *iv_return = TX_IEEE80211_RADIOTAP_DB_ANTNOISE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 34:
    return constant_34 (aTHX_ name, iv_return);
    break;
  case 35:
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL", 35)) {
#ifdef TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL
      *iv_return = TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 36:
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_TX_ATTENUATION", 36)) {
#ifdef TX_IEEE80211_RADIOTAP_TX_ATTENUATION
      *iv_return = TX_IEEE80211_RADIOTAP_TX_ATTENUATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 39:
    if (memEQ(name, "TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION", 39)) {
#ifdef TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION
      *iv_return = TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

