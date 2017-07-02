/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -t /home/lykrysh/Repos/directory-scanner/hash/muttype.gperf  */
/* Computed positions: -k'1,6' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"

#include <string.h>

enum {
	G_TO__,
	G_TO_A,
	G_TO_C,
	G_TO_T,
	T_TO__,
	T_TO_A,
	T_TO_C,
	T_TO_G,
	C_TO__,
	C_TO_A,
	C_TO_T,
	C_TO_G,
	A_TO__,
	A_TO_T,
	A_TO_C,
	A_TO_G,
	__TO_T,
	__TO_A,
	__TO_C,
	__TO_G,
	OTHER_
};

struct mtype{
	char *name;
	int offset;
};
#line 36 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
struct mtype;

#define TOTAL_KEYWORDS 21
#define MIN_WORD_LENGTH 6
#define MAX_WORD_LENGTH 6
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 50
/* maximum key range = 51, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash (register const char *str, register unsigned int len)
{
  static unsigned char asso_values[] =
    {
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 18, 10, 15,  8,  3,
       5, 51, 51,  0, 25, 51, 51, 51, 51, 51,
      51, 28, 51, 51, 51, 51, 25,  0, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51
    };
  return asso_values[(unsigned char)str[5]+1] + asso_values[(unsigned char)str[0]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct mtype *
in_word_set (register const char *str, register unsigned int len)
{
  static struct mtype wordlist[] =
    {
#line 41 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"g_to_t", G_TO_T},
      {""}, {""},
#line 48 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"c_to_t", C_TO_T},
      {""},
#line 40 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"g_to_c", G_TO_C},
      {""}, {""},
#line 39 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"g_to_a", G_TO_A},
      {""},
#line 38 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"g_to__", G_TO__},
#line 47 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"c_to_a", C_TO_A},
      {""},
#line 46 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"c_to__", C_TO__},
      {""},
#line 51 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"a_to_t", A_TO_T},
      {""}, {""},
#line 54 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"__to_t", __TO_T},
      {""},
#line 52 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"a_to_c", A_TO_C},
      {""}, {""},
#line 56 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"__to_c", __TO_C},
      {""},
#line 50 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"a_to__", A_TO__},
#line 55 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"__to_a", __TO_A},
      {""},
#line 49 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"c_to_g", C_TO_G},
      {""},
#line 44 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"t_to_c", T_TO_C},
      {""}, {""},
#line 43 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"t_to_a", T_TO_A},
      {""},
#line 42 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"t_to__", T_TO__},
      {""}, {""},
#line 58 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"other_", OTHER_},
      {""},
#line 53 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"a_to_g", A_TO_G},
      {""}, {""},
#line 57 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"__to_g", __TO_G},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 45 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"
      {"t_to_g", T_TO_G}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 59 "/home/lykrysh/Repos/directory-scanner/hash/muttype.gperf"


int get_offset(const char *str)
{
	struct mtype *t = in_word_set(str, strlen(str));
	return t ? t->offset : -1;
}
