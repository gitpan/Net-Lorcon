use strict; use warnings;
use bytes;

BEGIN { 
  #$ENV{'LORCON_IF'} = "ath1";
  #$ENV{'LORCON_INJ'} = "madwifing";
  $ENV{'LORCON_IF'} = "eth1";
  $ENV{'LORCON_INJ'} = "iwlwifi";
};

use Net::Lorcon qw(:all);

my $tx = Net::Lorcon->new($ENV{LORCON_IF}, $ENV{LORCON_INJ});

# Beacon for AP with SSID "Net::Lorcon"
my $packet = "\x80\x00\x00\x00\xff\xff\xff\xff\xff\xff\x00\x02\x02\xe2\xc4\xef\x00\x02\x02\xe2\xc4\xef\xd0\xfe\x37\xe0\xae\x0c\x00\x00\x00\x00\x64\x00\x21\x08\x00\x0b\x4e\x65\x74\x3a\x3a\x4c\x6f\x72\x63\x6f\x6e\x01\x08\x82\x84\x8b\x96\x0c\x12\x18\x24\x03\x01\x0d\x05\x04\x00\x01\x00\x00\x2a\x01\x00\x32\x04\x30\x48\x60\x6c";

!$tx->open && !$! && print "Open device\n";
$tx->setfunctionalmode(1);

while (1) {
   my $t = $tx->txpacket($packet);
   print "T: $t\n";
}
