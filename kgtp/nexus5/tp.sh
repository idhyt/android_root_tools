#!/bin/bash

## adb shell su /data/local/tmp/sample
echo -e 'echo su > sample.txt\necho /data/local/tmp/sample >> sample.txt\nadb shell < sample.txt' > sample.sh
chmod 755 sample.sh
nohup ./sample.sh &
sleep 1

## clean
rm sample.sh
rm sample.txt
rm nohup.out