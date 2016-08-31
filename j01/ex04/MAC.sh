#!/bin/sh
ifconfig -a | grep eth | cut -d ' ' -f 2