#!/bin/sh
ifconfig | grep ether | grep -v autoselect | cut -c 8-24
