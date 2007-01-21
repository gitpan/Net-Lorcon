use Test::More;
BEGIN { plan tests => 3 };
use Net::Lorcon qw(:all);

my @cards = Net::Lorcon::getcardlist();

ok(@cards > 1 && grep { /madwifi/ } @cards, "Cards listed");

# Assumes it's safe to call init (which it is with current Lorcon)
my $tx = Net::Lorcon->new("eth1", "madwifi");

ok($tx->isa("Net::Lorcon"), "object isa Net::Lorcon");

ok($tx->getcapabilities & TX80211_CAP_TRANSMIT, "can transmit");
