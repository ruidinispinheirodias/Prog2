#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;
    f = fopen("enunciado/musica.mp3", "r");
    fseek(f, -125, SEEK_END);
    int c;
    int i = 0;
    char titulo[31], artista[31], album[31], ano[5], comentario[31], dois[2], track, numero, genero;
    for (i = 0; i < 30; i++) { titulo[i] = (char) getc(f); }
    titulo[30] = 0;
    for (i = 0; i < 30; i++) { artista[i] = (char) getc(f); }
    artista[30] = 0;
    for (i = 0; i < 30; i++) { album[i] = (char) getc(f); }
    album[30] = 0;
    for (i = 0; i < 4; i++) { ano[i] = (char) getc(f); }
    ano[4] = 0;
    for (i = 0; i < 28; i++) { comentario[i] = (char) getc(f); }
    getc(f);
    //comentario[30]=0;
    numero = (char) getc(f);
    genero = (char) getc(f);
    char generos[80][30];
    strcpy(generos[0], "Blues");
    strcpy(generos[1], "Classic Rock");
    strcpy(generos[2], "Country");
    strcpy(generos[3], "Dance");
    strcpy(generos[4], "Disco");
    strcpy(generos[5], "Funk");
    strcpy(generos[6], "Grunge");
    strcpy(generos[7], "Hip-Hop");
    strcpy(generos[8], "Jazz");
    strcpy(generos[9], "Metal");
    strcpy(generos[10], "New Age");
    strcpy(generos[11], "Oldies");
    strcpy(generos[12], "Other");
    strcpy(generos[13], "Pop");
    strcpy(generos[14], "R&B");
    strcpy(generos[15], "Rap");
    strcpy(generos[16], "Reggae");
    strcpy(generos[17], "Rock");
    strcpy(generos[18], "Techno");
    strcpy(generos[19], "Industrial");
    strcpy(generos[20], "Alternative");
    strcpy(generos[21], "Ska");
    strcpy(generos[22], "Death Metal");
    strcpy(generos[23], "Pranks");
    strcpy(generos[24], "Soundtrack");
    strcpy(generos[25], "Euro-Techno");
    strcpy(generos[26], "Ambient");
    strcpy(generos[27], "Trip-Hop");
    strcpy(generos[28], "Vocal");
    strcpy(generos[29], "Jazz+Funk");
    strcpy(generos[30], "Fusion");
    strcpy(generos[31], "Trance");
    strcpy(generos[32], "Classical");
    strcpy(generos[33], "Instrumental");
    strcpy(generos[34], "Acid");
    strcpy(generos[35], "House");
    strcpy(generos[36], "Game");
    strcpy(generos[37], "Sound Clip");
    strcpy(generos[38], "Gospel");
    strcpy(generos[39], "Noise");
    strcpy(generos[40], "AlternRock");
    strcpy(generos[41], "Bass");
    strcpy(generos[42], "Soul");
    strcpy(generos[43], "Punk");
    strcpy(generos[44], "Space");
    strcpy(generos[45], "Meditative");
    strcpy(generos[46], "Instrumental Pop");
    strcpy(generos[47], "Instrumental Rock");
    strcpy(generos[48], "Ethnic");
    strcpy(generos[49], "Gothic");
    strcpy(generos[50], "Darkwave");
    strcpy(generos[51], "Techno-Industrial");
    strcpy(generos[52], "Electronic");
    strcpy(generos[53], "Pop-Folk");
    strcpy(generos[54], "Eurodance");
    strcpy(generos[55], "Dream");
    strcpy(generos[56], "Southern Rock");
    strcpy(generos[57], "Comedy");
    strcpy(generos[58], "Cult");
    strcpy(generos[59], "Gangsta");
    strcpy(generos[60], "Top 40");
    strcpy(generos[61], "Christian Rap");
    strcpy(generos[62], "Pop/Funk");
    strcpy(generos[63], "Jungle");
    strcpy(generos[64], "Native American");
    strcpy(generos[65], "Cabaret");
    strcpy(generos[66], "New Wave");
    strcpy(generos[67], "Psychadelic");
    strcpy(generos[68], "Rave");
    strcpy(generos[69], "Showtunes");
    strcpy(generos[70], "Trailer");
    strcpy(generos[71], "Lo-Fi");
    strcpy(generos[72], "Tribal");
    strcpy(generos[73], "Acid Punk");
    strcpy(generos[74], "Acid Jazz");
    strcpy(generos[75], "Polka");
    strcpy(generos[76], "Retro");
    strcpy(generos[77], "Musical");
    strcpy(generos[78], "Rock & Roll");
    strcpy(generos[79], "Hard Rock");
    printf("Titulo - %s\n", titulo);
    printf("Artista - %s\n", artista);
    printf("Album - %s\n", album);
    printf("Ano - %s\n", ano);
    printf("Número - %i\n", numero);
    printf("Género - %s\n", generos[genero]);

    fclose(f);
}