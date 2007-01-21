use Test;
BEGIN { plan tests => 2 };
use Net::Lorcon;
ok(1); # If we made it this far, we're ok.


my $fail;
foreach my $constname (qw(
	INJ_AIRJACK INJ_HOSTAP INJ_MADWIFING INJ_MADWIFIOLD INJ_MAX
	INJ_NODRIVER INJ_PRISM54 INJ_RT2500 INJ_RT2570 INJ_RTL8180 INJ_WLANNG
	MAX_IFNAME_LEN TX80211_CAP_BSSTIME TX80211_CAP_CTRL TX80211_CAP_DSSSTX
	TX80211_CAP_DURID TX80211_CAP_FRAG TX80211_CAP_MIMOTX TX80211_CAP_NONE
	TX80211_CAP_OFDMTX TX80211_CAP_SELFACK TX80211_CAP_SEQ
	TX80211_CAP_SETRATE TX80211_CAP_SNIFF TX80211_CAP_SNIFFACK
	TX80211_CAP_TRANSMIT TX80211_CAP_TXNOWAIT TX80211_STATUS_MAX)) {
  next if (eval "my \$a = $constname; 1");
  if ($@ =~ /^Your vendor has not defined Net::Lorcon macro $constname/) {
    print "# pass: $@";
  } else {
    print "# fail: $@";
    $fail = 1;
  }
}
if ($fail) {
  print "not ok 2\n";
} else {
  print "ok 2\n";
}

