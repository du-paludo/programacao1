ls -l /usr/bin | grep ^l | wc -l
grep ^processor /proc/cpuinfo | wc -l
free -h | grep ^Mem | cut -c15-17
