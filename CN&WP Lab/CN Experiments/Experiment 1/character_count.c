#include <stdio.h>
#include <string.h>

int main()
{
    int no_of_frames;
    printf("Enter no of frames:");
    scanf("%d",&no_of_frames);
    char frames[no_of_frames][50];
    for(int i = 0;i < no_of_frames;i++) {
        printf("Enter frame %d:",i+1);
        scanf("%s",&frames[i]);
    }
    printf("AT THE SENDER\n");
    printf("Data as frames\n");
    for(int i = 0;i < no_of_frames;i++) {
        printf("Frame %d:%d%s\n",i+1,(strlen(frames[i])+1),frames[i]);
    }
    printf("Data transmitted:");
    for(int i = 0;i < no_of_frames;i++) {
        printf("%d %s",(strlen(frames[i])+1),frames[i]);
    }
    printf("\nAT THE RECEIVER\n");
    printf("The data received.\n");
    printf("The data after removing count char:");
    for(int i = 0;i < no_of_frames;i++) {
        printf("%s ",frames[i]);
    }
    printf("\n");
    for(int i = 0;i < no_of_frames;i++) {
        printf("frame %d:%s\n",i+1,frames[i]);
    }
    return 0;
}

   

