#include <stdio.h>
#include <string.h>
#include "slist.h"

typedef struct music_item_t{
    char *name;
    char *path; /* location in storage */
    int id; /* 5digit, like karaoke */
}music_item_t;


bool find_by_id(void * cp_data, void * slist_data){
    int *cp = (int *)cp_data;
    music_item_t *song = (music_item_t *)slist_data;

    if(*cp ==  song->id)
        return true;
    else
        return false;
}
bool find_by_name(void * cp_data, void * slist_data){
    char *cpname = (char*)cp_data;
    music_item_t *song = (music_item_t *)slist_data;

    return !strcmp(cpname, song->name);
}

void release_song_list(void *data){
    music_item_t *song = (music_item_t *)data;
    free(song->name); //strdup
    free(song->path); //strdup
    free(song); //malloc
}


void add_song_list(slist **song_list){
    slist *music_list = NULL;
    music_item_t *tmp = NULL;

    tmp = (music_item_t *)malloc(sizeof(music_item_t));
    tmp->name = strdup("Mai mai mot tinh yeu");
    tmp->path = strdup("/run/media/MYUSB/music/mai-mai-mot-tinh-yeu.mp3");
    tmp->id = 00001;
    music_list = slist_append(music_list, (void*)tmp);

    tmp = (music_item_t *)malloc(sizeof(music_item_t));
    tmp->name = strdup("Hay nam chat tay anh nhe");
    tmp->path = strdup("/run/media/MYUSB/music/hay-nam-chat-tay-anh-nhe.mp3");
    tmp->id = 00002;
    music_list = slist_append(music_list, (void*)tmp);

    tmp = (music_item_t *)malloc(sizeof(music_item_t));
    tmp->name = strdup("Co khi nao roi xa");
    tmp->path = strdup("/run/media/MYUSB/music/co-khi-nao-roi-xa.mp3");
    tmp->id = 00003;
    music_list = slist_append(music_list, (void*)tmp);

    *song_list = music_list;
}

int main (void)
{
    int length=0;
    slist *music_list = NULL; //NOTE: always equas NULL at declare
    slist *walk=NULL;

    add_song_list(&music_list);

    /* LENGTH */
    length = slist_size(music_list);
    printf("Number of song: %d \n", length);

    /* DUYET DANH SACH */
    walk = music_list;
    while(walk){
        printf("song name: %s \n", FORCE_DATA_TYPE(music_item_t, walk)->name);
        walk=walk->next;
    }

    /* FIND THEO ID */
    int id = 1;
    walk = slist_find(music_list, (void*)&id, find_by_id);
    if(walk){
        printf("found song id<%d>: %s \n", id, FORCE_DATA_TYPE(music_item_t, walk)->name);
    }

    /* FIND THEO TEN BAI HAT */
    char *name = "Co khi nao roi xa";
    walk = slist_find(music_list, (void*)name, find_by_name);
    if(walk){
        printf("found song name: %s \n", FORCE_DATA_TYPE(music_item_t, walk)->name);
    }


    /* XOA TAT CA LINKED LIST, LUU Y NHO FREE LUON DATA*/
    music_list = slist_delete_all_x(music_list, release_song_list);

    /* LENGTH */
    length = slist_size(music_list);
    printf("Number of song: %d \n", length);

    return 0;
}
