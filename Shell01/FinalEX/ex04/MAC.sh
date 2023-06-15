ifconfig| grep ether | tr -d '\tr' |  awk '{print $2}'
