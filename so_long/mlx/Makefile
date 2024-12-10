#
#


NOM=libmlx.a
SRC= mlx_shaders.c mlx_new_window.m mlx_init_loop.m mlx_new_image.m mlx_xpm.c mlx_int_str_to_wordtab.c
SRC+= mlx_png.c mlx_mouse.m
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)
CFLAGS+= -O2 -w -Wno-deprecated-declarations -DSTRINGPUTX11

# add to match string put with X11 in size and position

.SILENT:

all: $(NOM)

$(NOM):	$(OBJ)
	ar -r $(NOM) $(OBJ) > /dev/null 2>&1
	ranlib $(NOM) > /dev/null 2>&1

clean:
	rm -f $(OBJ) *~
	rm -f mlx_app

fclean: clean
	rm -f $(NOM)

re: clean all
