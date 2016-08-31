#!/bin/sh
ldapsearch -LLLQ  uid=z* cn | sed '/^$/d' | sed '/^dn/d' | sort -rf | cut -c 5-