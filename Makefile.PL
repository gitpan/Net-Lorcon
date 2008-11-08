#
# $Id$
#
use ExtUtils::MakeMaker;

WriteMakefile(
   NAME          => 'Net::Lorcon',
   LICENSE       => 'perl',
   ABSTRACT_FROM => 'lib/Net/Lorcon.pm',
   AUTHOR        => 'David Leadbeater <dgl@dgl.cx>',
   DEFINE        => '',
   VERSION_FROM  => 'lib/Net/Lorcon.pm', # finds $VERSION
   PREREQ_PM     => {
     File::Copy => 0,
     File::Spec => 0,
   },
   LIBS          => ['-L/lib -L/usr/lib -L/usr/local/lib -lorcon'], # e.g., '-lm'
   DEFINE        => '', # e.g., '-DHAVE_SOMETHING'
   INC           => '-I/include -I/usr/include -I/usr/local/include',
);

if  (eval {require ExtUtils::Constant; 1}) {
   # If you edit these definitions to change the constants used by this module,
   # you will need to use the generated const-c.inc and const-xs.inc
   # files to replace their "fallback" counterparts before distributing your
   # changes.
   my @names = (qw(INJ_AIRJACK INJ_HOSTAP INJ_MADWIFING INJ_MADWIFIOLD INJ_MAX
      INJ_NODRIVER INJ_PRISM54 INJ_RT2500 INJ_RT2570 INJ_RTL8180
      INJ_WLANNG MAX_IFNAME_LEN TX80211_CAP_BSSTIME TX80211_CAP_CTRL
      TX80211_CAP_DSSSTX TX80211_CAP_DURID TX80211_CAP_FRAG
      TX80211_CAP_MIMOTX TX80211_CAP_NONE TX80211_CAP_OFDMTX
      TX80211_CAP_SELFACK TX80211_CAP_SEQ TX80211_CAP_SETRATE
      TX80211_CAP_SNIFF TX80211_CAP_SNIFFACK TX80211_CAP_TRANSMIT
      TX80211_CAP_TXNOWAIT TX80211_STATUS_MAX
      TX80211_ENOERR TX80211_ENOSUCHINJ TX80211_ENOHANDLER
      IW_MODE_AUTO IW_MODE_ADHOC IW_MODE_INFRA IW_MODE_MASTER
      IW_MODE_REPEAT IW_MODE_SECOND IW_MODE_MONITOR
   ));
   ExtUtils::Constant::WriteConstants(
      NAME         => 'Net::Lorcon',
      NAMES        => \@names,
      DEFAULT_TYPE => 'IV',
      C_FILE       => 'const-c.inc',
      XS_FILE      => 'const-xs.inc',
   );
}
else {
   use File::Copy;
   use File::Spec;
   foreach my $file ('const-c.inc', 'const-xs.inc') {
      my $fallback = File::Spec->catfile('fallback', $file);
      copy ($fallback, $file) or die "Can't copy $fallback to $file: $!";
   }
}
