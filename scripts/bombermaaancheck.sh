# /bin/bash

case "$(pidof Bombermaaan | wc -w)" in

0) echo "Shutting down pi:	$(date)" >> ~/bombermaaan.log
	/sbin/shutdown -h now 
	;;

1) #still running
	;;
*) #do nothing
	;;

esac
