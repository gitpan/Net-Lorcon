#
# $Id: Lorcon.pm 3 2008-11-08 10:37:37Z gomor $
#
package Net::Lorcon;
use strict; use warnings;

use 5.006;
use Carp;

use Exporter;
use AutoLoader;
our @ISA = qw(Exporter);

# Items to export into callers namespace by default. Note: do not export
# names by default without a very good reason. Use EXPORT_OK instead.
# Do not simply export all your public functions/methods/constants.

# This allows declaration	use Net::Lorcon ':all';
# If you do not need this, moving things directly into @EXPORT or @EXPORT_OK
# will save memory.
our %EXPORT_TAGS = ( 'all' => [ qw(
	INJ_AIRJACK
	INJ_AIRPCAP
	INJ_BCM43XX
	INJ_HOSTAP
	INJ_MAC80211
	INJ_MADWIFING
	INJ_MADWIFIOLD
	INJ_MAX
	INJ_NODRIVER
	INJ_PRISM54
	INJ_RT2500
	INJ_RT2570
	INJ_RT61
	INJ_RT73
	INJ_RTL8180
	INJ_WLANNG
	INJ_ZD1211RW
	MAX_IFNAME_LEN
	TX80211_CAP_BSSTIME
	TX80211_CAP_CTRL
	TX80211_CAP_DSSSTX
	TX80211_CAP_DURID
	TX80211_CAP_FRAG
	TX80211_CAP_MIMOTX
	TX80211_CAP_NONE
	TX80211_CAP_OFDMTX
	TX80211_CAP_SELFACK
	TX80211_CAP_SEQ
	TX80211_CAP_SETMODULATION
	TX80211_CAP_SETRATE
	TX80211_CAP_SNIFF
	TX80211_CAP_SNIFFACK
	TX80211_CAP_TRANSMIT
	TX80211_CAP_TXNOWAIT
	TX80211_FUNCMODE_INJECT
	TX80211_FUNCMODE_INJMON
	TX80211_FUNCMODE_RFMON
	TX80211_MODE_ADHOC
	TX80211_MODE_AUTO
	TX80211_MODE_INFRA
	TX80211_MODE_MASTER
	TX80211_MODE_MONITOR
	TX80211_MODE_REPEAT
	TX80211_MODE_SECOND
	TX80211_RTAP_LEN
	TX80211_RTAP_PRESENT
	TX80211_STATUS_MAX
	TX_IEEE80211_RADIOTAP_ANTENNA
	TX_IEEE80211_RADIOTAP_CHANNEL
	TX_IEEE80211_RADIOTAP_DBM_ANTNOISE
	TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL
	TX_IEEE80211_RADIOTAP_DBM_TX_POWER
	TX_IEEE80211_RADIOTAP_DB_ANTNOISE
	TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL
	TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION
	TX_IEEE80211_RADIOTAP_EXT
	TX_IEEE80211_RADIOTAP_FCS
	TX_IEEE80211_RADIOTAP_FHSS
	TX_IEEE80211_RADIOTAP_FLAGS
	TX_IEEE80211_RADIOTAP_LOCK_QUALITY
	TX_IEEE80211_RADIOTAP_RATE
	TX_IEEE80211_RADIOTAP_TSFT
	TX_IEEE80211_RADIOTAP_TX_ATTENUATION
) ] );

our @EXPORT_OK = ( @{ $EXPORT_TAGS{'all'} } );

our @EXPORT = qw(
	INJ_AIRJACK
	INJ_AIRPCAP
	INJ_BCM43XX
	INJ_HOSTAP
	INJ_MAC80211
	INJ_MADWIFING
	INJ_MADWIFIOLD
	INJ_MAX
	INJ_NODRIVER
	INJ_PRISM54
	INJ_RT2500
	INJ_RT2570
	INJ_RT61
	INJ_RT73
	INJ_RTL8180
	INJ_WLANNG
	INJ_ZD1211RW
	MAX_IFNAME_LEN
	TX80211_CAP_BSSTIME
	TX80211_CAP_CTRL
	TX80211_CAP_DSSSTX
	TX80211_CAP_DURID
	TX80211_CAP_FRAG
	TX80211_CAP_MIMOTX
	TX80211_CAP_NONE
	TX80211_CAP_OFDMTX
	TX80211_CAP_SELFACK
	TX80211_CAP_SEQ
	TX80211_CAP_SETMODULATION
	TX80211_CAP_SETRATE
	TX80211_CAP_SNIFF
	TX80211_CAP_SNIFFACK
	TX80211_CAP_TRANSMIT
	TX80211_CAP_TXNOWAIT
	TX80211_FUNCMODE_INJECT
	TX80211_FUNCMODE_INJMON
	TX80211_FUNCMODE_RFMON
	TX80211_MODE_ADHOC
	TX80211_MODE_AUTO
	TX80211_MODE_INFRA
	TX80211_MODE_MASTER
	TX80211_MODE_MONITOR
	TX80211_MODE_REPEAT
	TX80211_MODE_SECOND
	TX80211_RTAP_LEN
	TX80211_RTAP_PRESENT
	TX80211_STATUS_MAX
	TX_IEEE80211_RADIOTAP_ANTENNA
	TX_IEEE80211_RADIOTAP_CHANNEL
	TX_IEEE80211_RADIOTAP_DBM_ANTNOISE
	TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL
	TX_IEEE80211_RADIOTAP_DBM_TX_POWER
	TX_IEEE80211_RADIOTAP_DB_ANTNOISE
	TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL
	TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION
	TX_IEEE80211_RADIOTAP_EXT
	TX_IEEE80211_RADIOTAP_FCS
	TX_IEEE80211_RADIOTAP_FHSS
	TX_IEEE80211_RADIOTAP_FLAGS
	TX_IEEE80211_RADIOTAP_LOCK_QUALITY
	TX_IEEE80211_RADIOTAP_RATE
	TX_IEEE80211_RADIOTAP_TSFT
	TX_IEEE80211_RADIOTAP_TX_ATTENUATION
);

our $VERSION = '0.02';

sub AUTOLOAD {
    # This AUTOLOAD is used to 'autoload' constants from the constant()
    # XS function.

    my $constname;
    our $AUTOLOAD;
    ($constname = $AUTOLOAD) =~ s/.*:://;
    croak "&Net::Lorcon::constant not defined" if $constname eq 'constant';
    my ($error, $val) = constant($constname);
    if ($error) { croak $error; }
    {
	no strict 'refs';
	# Fixed between 5.005_53 and 5.005_61
#XXX	if ($] >= 5.00561) {
#XXX	   *$AUTOLOAD = sub () { $val };
#XXX	}
#XXX	else {
	   *$AUTOLOAD = sub { $val };
#XXX	}
    }
    goto &$AUTOLOAD;
}

require XSLoader;
XSLoader::load('Net::Lorcon', $VERSION);

sub new {
  my($class, $ifname, $injector) = @_;

  my $res = $injector;
  
  if($res !~ /^\d+$/) {
    $res = resolvecard($injector);
    if($res == INJ_NODRIVER()) {
      croak "Unknown driver ($injector)";
    }
  }

  return Net::Lorcon::_new($ifname, $res);
}

1;
__END__
=head1 NAME

Net::Lorcon - Raw wireless packet injection using the Lorcon library

=head1 SYNOPSIS

  use Net::Lorcon;

  my $tx = Net::Lorcon->new("eth1", "prism54");

  $tx->open;

  $tx->txpacket("packet..");

=head1 DESCRIPTION

This module enables raw 802.11 packet injection provided you have a Wi-Fi card
supported by Lorcon.

Lorcon can be obtained from L<http://802.11ninja.net/lorcon>.

=head1 FUNCTIONS

=over 4

=item B<Net::Lorcon::getcardlist>

Returns a list of supported driver names.

=item B<Net::Lorcon::resolvecard>

Returns the ID of the given card. Not normally needed as C<new> will
automatically call this.

=back

=head1 METHODS

=over 4

=item B<new>(device, driver) 

Constructs a new C<Net::Lorcon> object. C<device> is the name of the device to
use for packet injection. C<driver> is the driver to use (one of the names
returned from getcardlist)

=item B<getcapabilities>()

Returns the capabilites of this device. This is an integer with the
TX80211_CAP_* constants below ORed together.

=item B<open>()

Opens the device ready for transmitting packets

=item B<close>()

Closes the device. (Automatically called when object is destroyed).

=item B<setmode>(mode)

Sets the mode of the device. Expects constants from E<lt>linux/wireless.hE<gt>
(IW_MODE_MONITOR, etc).

=item B<getmode>()

Returns an integer representing the current mode.

=item B<setfunctionalmode>(func_mode)

(Not implemented in the version of Lorcon I have)

=item B<setchannel>(channel)

Sets the channel to trasmit on.

=item B<getchannel>

Returns the channel the wireless card is currently on.

=item B<txpacket>(packet)

Transmits the given packet. The expected input is a full 802.11 packet.

=back

=head2 EXPORT

None by default.

=head2 Exportable constants

=over

=item B<constant>

Used internally only.

=back

INJ_* are the various injection methods supported by Lorcon. TX80211_CAP_* are
returned by getcapabilites.

  INJ_AIRJACK
  INJ_AIRPCAP
  INJ_BCM43XX
  INJ_HOSTAP
  INJ_MAC80211
  INJ_MADWIFING
  INJ_MADWIFIOLD
  INJ_MAX
  INJ_NODRIVER
  INJ_PRISM54
  INJ_RT2500
  INJ_RT2570
  INJ_RT61
  INJ_RT73
  INJ_RTL8180
  INJ_WLANNG
  INJ_ZD1211RW
  MAX_IFNAME_LEN
  TX80211_CAP_BSSTIME
  TX80211_CAP_CTRL
  TX80211_CAP_DSSSTX
  TX80211_CAP_DURID
  TX80211_CAP_FRAG
  TX80211_CAP_MIMOTX
  TX80211_CAP_NONE
  TX80211_CAP_OFDMTX
  TX80211_CAP_SELFACK
  TX80211_CAP_SEQ
  TX80211_CAP_SETMODULATION
  TX80211_CAP_SETRATE
  TX80211_CAP_SNIFF
  TX80211_CAP_SNIFFACK
  TX80211_CAP_TRANSMIT
  TX80211_CAP_TXNOWAIT
  TX80211_FUNCMODE_INJECT
  TX80211_FUNCMODE_INJMON
  TX80211_FUNCMODE_RFMON
  TX80211_MODE_ADHOC
  TX80211_MODE_AUTO
  TX80211_MODE_INFRA
  TX80211_MODE_MASTER
  TX80211_MODE_MONITOR
  TX80211_MODE_REPEAT
  TX80211_MODE_SECOND
  TX80211_RTAP_LEN
  TX80211_RTAP_PRESENT
  TX80211_STATUS_MAX
  TX_IEEE80211_RADIOTAP_ANTENNA
  TX_IEEE80211_RADIOTAP_CHANNEL
  TX_IEEE80211_RADIOTAP_DBM_ANTNOISE
  TX_IEEE80211_RADIOTAP_DBM_ANTSIGNAL
  TX_IEEE80211_RADIOTAP_DBM_TX_POWER
  TX_IEEE80211_RADIOTAP_DB_ANTNOISE
  TX_IEEE80211_RADIOTAP_DB_ANTSIGNAL
  TX_IEEE80211_RADIOTAP_DB_TX_ATTENUATION
  TX_IEEE80211_RADIOTAP_EXT
  TX_IEEE80211_RADIOTAP_FCS
  TX_IEEE80211_RADIOTAP_FHSS
  TX_IEEE80211_RADIOTAP_FLAGS
  TX_IEEE80211_RADIOTAP_LOCK_QUALITY
  TX_IEEE80211_RADIOTAP_RATE
  TX_IEEE80211_RADIOTAP_TSFT
  TX_IEEE80211_RADIOTAP_TX_ATTENUATION

=head1 SEE ALSO

L<lorcon(7)>, 802.11 Wireless Networks by Matthew Gast.

=head1 AUTHOR

David Leadbeater, E<lt>dgl at dgl dot cxE<gt> (original author)

Patrice E<lt>GomoRE<gt> Auffret, E<lt>gomor at cpan dot orgE<gt> (current maintainer)

=head1 COPYRIGHT AND LICENSE

Copyright (C) 2007-2008 by David Leadbeater and Patrice E<lt>GomoRE<gt> Auffret

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself, either Perl version 5.8.8 or,
at your option, any later version of Perl 5 you may have available.

=cut
