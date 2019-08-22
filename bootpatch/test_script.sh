#!/system/bin/sh

/system/bin/rm -rf /data/local/tmp/*

curdate=`/system/bin/date +%Y-%m-%d-%H-%M-%S`

/system/bin/mkdir /data/local/tmp/$curdate

/system/bin/mkdir /data/local/tmp/test_script