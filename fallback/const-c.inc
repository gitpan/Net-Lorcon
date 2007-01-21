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
     INJ_AIRJACK INJ_PRISM54 INJ_RTL8180 */
  /* Offset 6 gives the best switch position.  */
  switch (name[6]) {
  case 'I':
    if (memEQ(name, "INJ_PRISM54", 11)) {
    /*                     ^           */
#ifdef INJ_PRISM54
      *iv_return = INJ_PRISM54;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "INJ_RTL8180", 11)) {
    /*                     ^           */
#ifdef INJ_RTL8180
      *iv_return = INJ_RTL8180;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "INJ_AIRJACK", 11)) {
    /*                     ^           */
#ifdef INJ_AIRJACK
      *iv_return = INJ_AIRJACK;
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
constant_13 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     INJ_MADWIFING IW_MODE_ADHOC IW_MODE_INFRA */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case 'F':
    if (memEQ(name, "IW_MODE_INFRA", 13)) {
    /*                         ^         */
#ifdef IW_MODE_INFRA
      *iv_return = IW_MODE_INFRA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "IW_MODE_ADHOC", 13)) {
    /*                         ^         */
#ifdef IW_MODE_ADHOC
      *iv_return = IW_MODE_ADHOC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "INJ_MADWIFING", 13)) {
    /*                         ^         */
#ifdef INJ_MADWIFING
      *iv_return = INJ_MADWIFING;
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
constant_14 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     INJ_MADWIFIOLD IW_MODE_MASTER IW_MODE_REPEAT IW_MODE_SECOND MAX_IFNAME_LEN
     TX80211_ENOERR */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case 'C':
    if (memEQ(name, "IW_MODE_SECOND", 14)) {
    /*                         ^          */
#ifdef IW_MODE_SECOND
      *iv_return = IW_MODE_SECOND;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'I':
    if (memEQ(name, "INJ_MADWIFIOLD", 14)) {
    /*                         ^          */
#ifdef INJ_MADWIFIOLD
      *iv_return = INJ_MADWIFIOLD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "TX80211_ENOERR", 14)) {
    /*                         ^          */
#ifdef TX80211_ENOERR
      *iv_return = TX80211_ENOERR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "IW_MODE_REPEAT", 14)) {
    /*                         ^          */
#ifdef IW_MODE_REPEAT
      *iv_return = IW_MODE_REPEAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "IW_MODE_MASTER", 14)) {
    /*                         ^          */
#ifdef IW_MODE_MASTER
      *iv_return = IW_MODE_MASTER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '_':
    if (memEQ(name, "MAX_IFNAME_LEN", 14)) {
    /*                         ^          */
#ifdef MAX_IFNAME_LEN
      *iv_return = MAX_IFNAME_LEN;
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
     TX80211_CAP_CTRL TX80211_CAP_FRAG TX80211_CAP_NONE */
  /* Offset 13 gives the best switch position.  */
  switch (name[13]) {
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
constant_18 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     TX80211_CAP_DSSSTX TX80211_CAP_MIMOTX TX80211_CAP_OFDMTX
     TX80211_ENOHANDLER TX80211_ENOSUCHINJ TX80211_STATUS_MAX */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'I':
    if (memEQ(name, "TX80211_ENOSUCHINJ", 18)) {
    /*                              ^         */
#ifdef TX80211_ENOSUCHINJ
      *iv_return = TX80211_ENOSUCHINJ;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "TX80211_ENOHANDLER", 18)) {
    /*                              ^         */
#ifdef TX80211_ENOHANDLER
      *iv_return = TX80211_ENOHANDLER;
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
     TX80211_CAP_BSSTIME TX80211_CAP_SELFACK TX80211_CAP_SETRATE */
  /* Offset 14 gives the best switch position.  */
  switch (name[14]) {
  case 'L':
    if (memEQ(name, "TX80211_CAP_SELFACK", 19)) {
    /*                             ^           */
#ifdef TX80211_CAP_SELFACK
      *iv_return = TX80211_CAP_SELFACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "TX80211_CAP_BSSTIME", 19)) {
    /*                             ^           */
#ifdef TX80211_CAP_BSSTIME
      *iv_return = TX80211_CAP_BSSTIME;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "TX80211_CAP_SETRATE", 19)) {
    /*                             ^           */
#ifdef TX80211_CAP_SETRATE
      *iv_return = TX80211_CAP_SETRATE;
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
     TX80211_CAP_SNIFFACK TX80211_CAP_TRANSMIT TX80211_CAP_TXNOWAIT */
  /* Offset 15 gives the best switch position.  */
  switch (name[15]) {
  case 'F':
    if (memEQ(name, "TX80211_CAP_SNIFFACK", 20)) {
    /*                              ^           */
#ifdef TX80211_CAP_SNIFFACK
      *iv_return = TX80211_CAP_SNIFFACK;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "TX80211_CAP_TRANSMIT", 20)) {
    /*                              ^           */
#ifdef TX80211_CAP_TRANSMIT
      *iv_return = TX80211_CAP_TRANSMIT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "TX80211_CAP_TXNOWAIT", 20)) {
    /*                              ^           */
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
my @names = (qw(INJ_AIRJACK INJ_HOSTAP INJ_MADWIFING INJ_MADWIFIOLD INJ_MAX
	       INJ_NODRIVER INJ_PRISM54 INJ_RT2500 INJ_RT2570 INJ_RTL8180
	       INJ_WLANNG IW_MODE_ADHOC IW_MODE_AUTO IW_MODE_INFRA
	       IW_MODE_MASTER IW_MODE_MONITOR IW_MODE_REPEAT IW_MODE_SECOND
	       MAX_IFNAME_LEN TX80211_CAP_BSSTIME TX80211_CAP_CTRL
	       TX80211_CAP_DSSSTX TX80211_CAP_DURID TX80211_CAP_FRAG
	       TX80211_CAP_MIMOTX TX80211_CAP_NONE TX80211_CAP_OFDMTX
	       TX80211_CAP_SELFACK TX80211_CAP_SEQ TX80211_CAP_SETRATE
	       TX80211_CAP_SNIFF TX80211_CAP_SNIFFACK TX80211_CAP_TRANSMIT
	       TX80211_CAP_TXNOWAIT TX80211_ENOERR TX80211_ENOHANDLER
	       TX80211_ENOSUCHINJ TX80211_STATUS_MAX));

print constant_types(); # macro defs
foreach (C_constant ("Net::Lorcon", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "#### XS Section:\n";
print XS_constant ("Net::Lorcon", $types);
__END__
   */

  switch (len) {
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
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    /* Names all of length 12.  */
    /* INJ_NODRIVER IW_MODE_AUTO */
    /* Offset 4 gives the best switch position.  */
    switch (name[4]) {
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
    case 'O':
      if (memEQ(name, "IW_MODE_AUTO", 12)) {
      /*                   ^              */
#ifdef IW_MODE_AUTO
        *iv_return = IW_MODE_AUTO;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 13:
    return constant_13 (aTHX_ name, iv_return);
    break;
  case 14:
    return constant_14 (aTHX_ name, iv_return);
    break;
  case 15:
    /* Names all of length 15.  */
    /* IW_MODE_MONITOR TX80211_CAP_SEQ */
    /* Offset 14 gives the best switch position.  */
    switch (name[14]) {
    case 'Q':
      if (memEQ(name, "TX80211_CAP_SE", 14)) {
      /*                             Q      */
#ifdef TX80211_CAP_SEQ
        *iv_return = TX80211_CAP_SEQ;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    case 'R':
      if (memEQ(name, "IW_MODE_MONITO", 14)) {
      /*                             R      */
#ifdef IW_MODE_MONITOR
        *iv_return = IW_MODE_MONITOR;
        return PERL_constant_ISIV;
#else
        return PERL_constant_NOTDEF;
#endif
      }
      break;
    }
    break;
  case 16:
    return constant_16 (aTHX_ name, iv_return);
    break;
  case 17:
    /* Names all of length 17.  */
    /* TX80211_CAP_DURID TX80211_CAP_SNIFF */
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
    }
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
  }
  return PERL_constant_NOTFOUND;
}

