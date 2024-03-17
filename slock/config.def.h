/* user and group to drop privileges to */
static const char *user = "hamza";
static const char *group = "nobody"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
    [INIT] = "black",         /* after initialization */
    [INPUT] = "#005577",      /* during input */
    [FAILED] = "#CC3333",     /* wrong password */
};


/* Background image path, should be available to the user above */
static const char *background_image =
    "/home/hamza/pictures/wallpapers/Koenigsegg_JeskoAbsolut_Wallpaper.jpg";




/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;






/* time in seconds before the monitor shuts down */
static const int monitortime = 120;



