#!/usr/bin/perl
use strict; use warnings;

use Net::Lorcon qw(:all);

my @cards = Net::Lorcon::getcardlist();
use Data::Dumper;
print Dumper(\@cards);
