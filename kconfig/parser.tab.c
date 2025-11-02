/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "kconfig/parser.y"


#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <xalloc.h>
#include "lkc.h"
#include "internal.h"
#include "preprocess.h"

#define printd(mask, fmt...) if (cdebug & (mask)) printf(fmt)

#define PRINTD		0x0001
#define DEBUG_PARSE	0x0002

int cdebug = PRINTD;

static void yyerror(const char *err);
static void zconf_error(const char *err, ...);
static bool zconf_endtoken(const char *tokenname,
			   const char *expected_tokenname);

struct menu *current_menu, *current_entry, *current_choice;


#line 100 "kconfig/parser.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_KCONFIG_PARSER_TAB_H_INCLUDED
# define YY_YY_KCONFIG_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_HELPTEXT = 258,
    T_WORD = 259,
    T_WORD_QUOTE = 260,
    T_BOOL = 261,
    T_CHOICE = 262,
    T_CLOSE_PAREN = 263,
    T_COLON_EQUAL = 264,
    T_COMMENT = 265,
    T_CONFIG = 266,
    T_DEFAULT = 267,
    T_DEF_BOOL = 268,
    T_DEF_TRISTATE = 269,
    T_DEPENDS = 270,
    T_ENDCHOICE = 271,
    T_ENDIF = 272,
    T_ENDMENU = 273,
    T_HELP = 274,
    T_HEX = 275,
    T_IF = 276,
    T_IMPLY = 277,
    T_INT = 278,
    T_MAINMENU = 279,
    T_MENU = 280,
    T_MENUCONFIG = 281,
    T_MODULES = 282,
    T_ON = 283,
    T_OPEN_PAREN = 284,
    T_PLUS_EQUAL = 285,
    T_PROMPT = 286,
    T_RANGE = 287,
    T_SELECT = 288,
    T_SOURCE = 289,
    T_STRING = 290,
    T_TRANSITIONAL = 291,
    T_TRISTATE = 292,
    T_VISIBLE = 293,
    T_EOL = 294,
    T_ASSIGN_VAL = 295,
    T_OR = 296,
    T_AND = 297,
    T_EQUAL = 298,
    T_UNEQUAL = 299,
    T_LESS = 300,
    T_LESS_EQUAL = 301,
    T_GREATER = 302,
    T_GREATER_EQUAL = 303,
    T_NOT = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 36 "kconfig/parser.y"

	char *string;
	struct symbol *symbol;
	struct expr *expr;
	struct menu *menu;
	enum symbol_type type;
	enum variable_flavor flavor;

#line 202 "kconfig/parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_KCONFIG_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

#define YYUNDEFTOK  2
#define YYMAXUTOK   304

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   108,   112,   117,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   131,   133,   134,   135,
     136,   141,   147,   175,   181,   190,   192,   193,   194,   197,
     203,   209,   215,   224,   230,   236,   242,   252,   263,   276,
     286,   289,   291,   292,   293,   296,   302,   309,   310,   311,
     312,   313,   316,   317,   318,   322,   330,   338,   341,   346,
     353,   358,   366,   369,   371,   372,   375,   384,   391,   394,
     396,   401,   407,   425,   432,   439,   441,   446,   447,   448,
     451,   452,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   469,   471,   472,   477,   480,   481,   482,
     486,   487
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_HELPTEXT", "T_WORD", "T_WORD_QUOTE",
  "T_BOOL", "T_CHOICE", "T_CLOSE_PAREN", "T_COLON_EQUAL", "T_COMMENT",
  "T_CONFIG", "T_DEFAULT", "T_DEF_BOOL", "T_DEF_TRISTATE", "T_DEPENDS",
  "T_ENDCHOICE", "T_ENDIF", "T_ENDMENU", "T_HELP", "T_HEX", "T_IF",
  "T_IMPLY", "T_INT", "T_MAINMENU", "T_MENU", "T_MENUCONFIG", "T_MODULES",
  "T_ON", "T_OPEN_PAREN", "T_PLUS_EQUAL", "T_PROMPT", "T_RANGE",
  "T_SELECT", "T_SOURCE", "T_STRING", "T_TRANSITIONAL", "T_TRISTATE",
  "T_VISIBLE", "T_EOL", "T_ASSIGN_VAL", "T_OR", "T_AND", "T_EQUAL",
  "T_UNEQUAL", "T_LESS", "T_LESS_EQUAL", "T_GREATER", "T_GREATER_EQUAL",
  "T_NOT", "$accept", "input", "mainmenu_stmt", "stmt_list",
  "stmt_list_in_choice", "config_entry_start", "config_stmt",
  "menuconfig_entry_start", "menuconfig_stmt", "config_option_list",
  "config_option", "choice", "choice_entry", "choice_end", "choice_stmt",
  "choice_option_list", "choice_option", "type", "default", "if_entry",
  "if_end", "if_stmt", "if_stmt_in_choice", "menu", "menu_entry",
  "menu_end", "menu_stmt", "menu_option_list", "source_stmt", "comment",
  "comment_stmt", "comment_option_list", "help_start", "help", "depends",
  "visible", "prompt_stmt_opt", "end", "if_expr", "expr",
  "nonconst_symbol", "symbol", "assignment_stmt", "assign_op",
  "assign_val", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -4

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    15,    26,   -63,    35,     9,   -63,    63,    19,    14,
      29,    42,    50,     2,    67,    50,    72,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,    48,   -63,   -63,   -63,    39,
     -63,    53,   -63,    57,   -63,     2,     2,    52,   -63,   124,
      59,    64,    68,   117,   117,    40,    65,   101,     3,   101,
      89,   -63,   -63,    71,   -63,   -63,     8,   -63,   -63,     2,
       2,    17,    17,    17,    17,    17,    17,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,    78,    75,   -63,    50,   -63,    81,
     116,    17,    50,   -63,    85,   -63,   -63,   120,     2,   125,
     -63,   -63,    50,   128,   -63,   -63,   -63,    95,    99,   102,
     103,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   122,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   104,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     2,   -63,   122,   -63,   122,
      17,   122,   -63,   122,   106,    -4,   -63,   122,   122,   -63,
     -63,   -63,   -63,    65,     2,   108,    74,   112,   119,   122,
     121,   -63,   -63,   123,   134,   135,   -63,    -8,   -63,   -63,
     -63,   -63,   136,   -63,   -63,   -63,   -63,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     5,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     9,    25,
      12,    41,    16,     7,     5,    10,    63,     5,    11,    13,
      69,     8,     6,     4,    15,     0,    98,    99,    97,   100,
      37,     0,    93,     0,    95,     0,     0,     0,    94,    82,
       0,     0,     0,    22,    24,    38,     0,     0,    60,     0,
      68,    14,   101,     0,    67,    21,     0,    90,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    23,    66,
      47,    52,    53,    54,     0,     0,    50,     0,    49,     0,
       0,     0,     0,    51,     0,    48,    26,    75,     0,     0,
      28,    27,     0,     0,    42,    44,    43,     0,     0,     0,
       0,    18,    40,    16,    19,    17,    39,    57,    56,    80,
      65,    64,    62,    61,    70,    96,    89,    91,    92,    87,
      88,    83,    84,    85,    86,     0,    71,    80,    36,    80,
       0,    80,    31,    80,     0,    80,    72,    80,    80,    20,
      78,    79,    77,     0,     0,     0,     0,     0,     0,    80,
       0,    76,    29,     0,     0,     0,    58,    81,    74,    73,
      34,    30,     0,    33,    32,    46,    45,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,    16,    43,   -63,   -54,   -63,   -63,   145,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -53,
      23,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -52,   -63,   -63,   126,   -28,   -63,   -63,     6,    18,   -45,
      -7,   -62,   -63,   -63,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    56,    17,    18,    19,    20,    53,
      96,    21,    22,   112,    23,    55,   104,    97,    98,    24,
     117,    25,   114,    26,    27,   122,    28,    58,    29,    30,
      31,    60,    99,   100,   101,   121,   144,   118,   155,    47,
      48,    49,    32,    39,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    67,   111,   113,   115,    43,    42,    44,    51,   129,
     130,   131,   132,   133,   134,    35,   126,   154,    84,     7,
       5,    42,    44,    36,   127,   128,     6,   106,     1,   140,
     120,    45,   124,    69,    70,    -3,     8,    69,    70,     9,
      57,   119,    10,    59,    37,    11,    12,    41,    33,    69,
      70,    46,   102,   145,    42,    84,    13,    38,    34,    85,
      14,    15,   116,    -2,     8,   123,   107,     9,    40,    16,
      10,   103,    50,    11,    12,    11,    12,    52,   159,    62,
     137,   108,   109,   110,    13,   141,    13,    61,    14,    15,
     156,    68,    64,    69,    70,   147,    65,    16,    77,   111,
     113,   115,     8,    78,    84,     9,   135,    79,    10,   167,
     125,    11,    12,   169,   136,    69,    70,   108,   109,   110,
     138,   139,    13,    80,   142,   143,    14,    15,   146,    81,
      82,    83,    84,   148,   149,    16,    85,    86,   150,    87,
      88,   151,   152,   154,    89,   162,    70,   168,    90,    91,
      92,   170,    93,    94,    95,   157,   153,   158,   171,   160,
     173,   161,   174,   163,    54,   164,   165,    71,    72,    73,
      74,    75,    76,   175,   176,   177,   166,   172,     0,     0,
       0,   105
};

static const yytype_int16 yycheck[] =
{
      45,    46,    56,    56,    56,    12,     4,     5,    15,    71,
      72,    73,    74,    75,    76,     1,     8,    21,    15,     3,
       5,     4,     5,     9,    69,    70,     0,    55,    24,    91,
      58,    29,    60,    41,    42,     0,     1,    41,    42,     4,
      24,    38,     7,    27,    30,    10,    11,     5,    39,    41,
      42,    49,    12,    98,     4,    15,    21,    43,    39,    19,
      25,    26,    56,     0,     1,    59,     1,     4,    39,    34,
       7,    31,     5,    10,    11,    10,    11,     5,   140,    40,
      87,    16,    17,    18,    21,    92,    21,    39,    25,    26,
     135,    39,    39,    41,    42,   102,    39,    34,    39,   153,
     153,   153,     1,    39,    15,     4,    28,    39,     7,   154,
      39,    10,    11,    39,    39,    41,    42,    16,    17,    18,
      39,     5,    21,     6,    39,     5,    25,    26,     3,    12,
      13,    14,    15,     5,    39,    34,    19,    20,    39,    22,
      23,    39,    39,    21,    27,    39,    42,    39,    31,    32,
      33,    39,    35,    36,    37,   137,   113,   139,    39,   141,
      39,   143,    39,   145,    19,   147,   148,    43,    44,    45,
      46,    47,    48,    39,    39,    39,   153,   159,    -1,    -1,
      -1,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    51,    52,    53,     5,     0,    53,     1,     4,
       7,    10,    11,    21,    25,    26,    34,    55,    56,    57,
      58,    61,    62,    64,    69,    71,    73,    74,    76,    78,
      79,    80,    92,    39,    39,     1,     9,    30,    43,    93,
      39,     5,     4,    90,     5,    29,    49,    89,    90,    91,
       5,    90,     5,    59,    59,    65,    54,    53,    77,    53,
      81,    39,    40,    94,    39,    39,    89,    89,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    39,    39,    39,
       6,    12,    13,    14,    15,    19,    20,    22,    23,    27,
      31,    32,    33,    35,    36,    37,    60,    67,    68,    82,
      83,    84,    12,    31,    66,    83,    84,     1,    16,    17,
      18,    56,    63,    69,    72,    80,    87,    70,    87,    38,
      84,    85,    75,    87,    84,    39,     8,    89,    89,    91,
      91,    91,    91,    91,    91,    28,    39,    90,    39,     5,
      91,    90,    39,     5,    86,    89,     3,    90,     5,    39,
      39,    39,    39,    54,    21,    88,    89,    88,    88,    91,
      88,    88,    39,    88,    88,    88,    70,    89,    39,    39,
      39,    39,    88,    39,    39,    39,    39,    39
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    55,    56,    57,    58,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    62,    63,
      64,    65,    65,    65,    65,    66,    66,    67,    67,    67,
      67,    67,    68,    68,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    77,    77,    78,    79,    80,    81,
      81,    82,    83,    84,    85,    86,    86,    87,    87,    87,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    91,    91,    92,    93,    93,    93,
      94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     3,     0,     2,     2,     2,
       3,     3,     2,     3,     2,     0,     2,     2,     2,     3,
       4,     2,     4,     4,     4,     5,     2,     2,     2,     1,
       3,     0,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     3,     3,
       2,     1,     3,     0,     2,     2,     3,     3,     2,     0,
       2,     2,     2,     4,     3,     0,     2,     2,     2,     2,
       0,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     1,     1,     1,     4,     1,     1,     1,
       0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 62: /* choice_entry  */
#line 100 "kconfig/parser.y"
      {
	fprintf(stderr, "%s:%d: missing end statement for this entry\n",
		((*yyvaluep).menu)->filename, ((*yyvaluep).menu)->lineno);
	if (current_menu == ((*yyvaluep).menu))
		menu_end_menu();
}
#line 1186 "kconfig/parser.tab.c"
        break;

    case 69: /* if_entry  */
#line 100 "kconfig/parser.y"
      {
	fprintf(stderr, "%s:%d: missing end statement for this entry\n",
		((*yyvaluep).menu)->filename, ((*yyvaluep).menu)->lineno);
	if (current_menu == ((*yyvaluep).menu))
		menu_end_menu();
}
#line 1197 "kconfig/parser.tab.c"
        break;

    case 74: /* menu_entry  */
#line 100 "kconfig/parser.y"
      {
	fprintf(stderr, "%s:%d: missing end statement for this entry\n",
		((*yyvaluep).menu)->filename, ((*yyvaluep).menu)->lineno);
	if (current_menu == ((*yyvaluep).menu))
		menu_end_menu();
}
#line 1208 "kconfig/parser.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4:
#line 113 "kconfig/parser.y"
    {
	menu_add_prompt(P_MENU, (yyvsp[-1].string), NULL);
}
#line 1476 "kconfig/parser.tab.c"
    break;

  case 14:
#line 127 "kconfig/parser.y"
    { zconf_error("unknown statement \"%s\"", (yyvsp[-2].string)); }
#line 1482 "kconfig/parser.tab.c"
    break;

  case 15:
#line 128 "kconfig/parser.y"
    { zconf_error("invalid statement"); }
#line 1488 "kconfig/parser.tab.c"
    break;

  case 20:
#line 136 "kconfig/parser.y"
    { zconf_error("invalid statement"); }
#line 1494 "kconfig/parser.tab.c"
    break;

  case 21:
#line 142 "kconfig/parser.y"
    {
	menu_add_entry((yyvsp[-1].symbol), M_NORMAL);
	printd(DEBUG_PARSE, "%s:%d:config %s\n", cur_filename, cur_lineno, (yyvsp[-1].symbol)->name);
}
#line 1503 "kconfig/parser.tab.c"
    break;

  case 22:
#line 148 "kconfig/parser.y"
    {
	if (current_choice) {
		if (!current_entry->prompt) {
			fprintf(stderr, "%s:%d: error: choice member must have a prompt\n",
				current_entry->filename, current_entry->lineno);
			yynerrs++;
		}

		if (current_entry->sym->type != S_BOOLEAN) {
			fprintf(stderr, "%s:%d: error: choice member must be bool\n",
				current_entry->filename, current_entry->lineno);
			yynerrs++;
		}

		/*
		 * If the same symbol appears twice in a choice block, the list
		 * node would be added twice, leading to a broken linked list.
		 * list_empty() ensures that this symbol has not yet added.
		 */
		if (list_empty(&current_entry->sym->choice_link))
			list_add_tail(&current_entry->sym->choice_link,
				      &current_choice->choice_members);
	}

	printd(DEBUG_PARSE, "%s:%d:endconfig\n", cur_filename, cur_lineno);
}
#line 1534 "kconfig/parser.tab.c"
    break;

  case 23:
#line 176 "kconfig/parser.y"
    {
	menu_add_entry((yyvsp[-1].symbol), M_MENU);
	printd(DEBUG_PARSE, "%s:%d:menuconfig %s\n", cur_filename, cur_lineno, (yyvsp[-1].symbol)->name);
}
#line 1543 "kconfig/parser.tab.c"
    break;

  case 24:
#line 182 "kconfig/parser.y"
    {
	if (current_entry->prompt)
		current_entry->prompt->type = P_MENU;
	else
		zconf_error("menuconfig statement without prompt");
	printd(DEBUG_PARSE, "%s:%d:endconfig\n", cur_filename, cur_lineno);
}
#line 1555 "kconfig/parser.tab.c"
    break;

  case 29:
#line 198 "kconfig/parser.y"
    {
	menu_set_type((yyvsp[-2].type));
	printd(DEBUG_PARSE, "%s:%d:type(%u)\n", cur_filename, cur_lineno, (yyvsp[-2].type));
}
#line 1564 "kconfig/parser.tab.c"
    break;

  case 30:
#line 204 "kconfig/parser.y"
    {
	menu_add_prompt(P_PROMPT, (yyvsp[-2].string), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:prompt\n", cur_filename, cur_lineno);
}
#line 1573 "kconfig/parser.tab.c"
    break;

  case 31:
#line 210 "kconfig/parser.y"
    {
	current_entry->sym->flags |= SYMBOL_TRANS;
	printd(DEBUG_PARSE, "%s:%d:transitional\n", cur_filename, cur_lineno);
}
#line 1582 "kconfig/parser.tab.c"
    break;

  case 32:
#line 216 "kconfig/parser.y"
    {
	menu_add_expr(P_DEFAULT, (yyvsp[-2].expr), (yyvsp[-1].expr));
	if ((yyvsp[-3].type) != S_UNKNOWN)
		menu_set_type((yyvsp[-3].type));
	printd(DEBUG_PARSE, "%s:%d:default(%u)\n", cur_filename, cur_lineno,
		(yyvsp[-3].type));
}
#line 1594 "kconfig/parser.tab.c"
    break;

  case 33:
#line 225 "kconfig/parser.y"
    {
	menu_add_symbol(P_SELECT, (yyvsp[-2].symbol), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:select\n", cur_filename, cur_lineno);
}
#line 1603 "kconfig/parser.tab.c"
    break;

  case 34:
#line 231 "kconfig/parser.y"
    {
	menu_add_symbol(P_IMPLY, (yyvsp[-2].symbol), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:imply\n", cur_filename, cur_lineno);
}
#line 1612 "kconfig/parser.tab.c"
    break;

  case 35:
#line 237 "kconfig/parser.y"
    {
	menu_add_expr(P_RANGE, expr_alloc_comp(E_RANGE,(yyvsp[-3].symbol), (yyvsp[-2].symbol)), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:range\n", cur_filename, cur_lineno);
}
#line 1621 "kconfig/parser.tab.c"
    break;

  case 36:
#line 243 "kconfig/parser.y"
    {
	if (modules_sym)
		zconf_error("symbol '%s' redefines option 'modules' already defined by symbol '%s'",
			    current_entry->sym->name, modules_sym->name);
	modules_sym = current_entry->sym;
}
#line 1632 "kconfig/parser.tab.c"
    break;

  case 37:
#line 253 "kconfig/parser.y"
    {
	struct symbol *sym = sym_lookup(NULL, 0);

	menu_add_entry(sym, M_CHOICE);
	menu_set_type(S_BOOLEAN);
	INIT_LIST_HEAD(&current_entry->choice_members);

	printd(DEBUG_PARSE, "%s:%d:choice\n", cur_filename, cur_lineno);
}
#line 1646 "kconfig/parser.tab.c"
    break;

  case 38:
#line 264 "kconfig/parser.y"
    {
	if (!current_entry->prompt) {
		fprintf(stderr, "%s:%d: error: choice must have a prompt\n",
			current_entry->filename, current_entry->lineno);
		yynerrs++;
	}

	(yyval.menu) = menu_add_menu();

	current_choice = current_entry;
}
#line 1662 "kconfig/parser.tab.c"
    break;

  case 39:
#line 277 "kconfig/parser.y"
    {
	current_choice = NULL;

	if (zconf_endtoken((yyvsp[0].string), "choice")) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endchoice\n", cur_filename, cur_lineno);
	}
}
#line 1675 "kconfig/parser.tab.c"
    break;

  case 45:
#line 297 "kconfig/parser.y"
    {
	menu_add_prompt(P_PROMPT, (yyvsp[-2].string), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:prompt\n", cur_filename, cur_lineno);
}
#line 1684 "kconfig/parser.tab.c"
    break;

  case 46:
#line 303 "kconfig/parser.y"
    {
	menu_add_symbol(P_DEFAULT, (yyvsp[-2].symbol), (yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:default\n", cur_filename, cur_lineno);
}
#line 1693 "kconfig/parser.tab.c"
    break;

  case 47:
#line 309 "kconfig/parser.y"
    { (yyval.type) = S_BOOLEAN; }
#line 1699 "kconfig/parser.tab.c"
    break;

  case 48:
#line 310 "kconfig/parser.y"
    { (yyval.type) = S_TRISTATE; }
#line 1705 "kconfig/parser.tab.c"
    break;

  case 49:
#line 311 "kconfig/parser.y"
    { (yyval.type) = S_INT; }
#line 1711 "kconfig/parser.tab.c"
    break;

  case 50:
#line 312 "kconfig/parser.y"
    { (yyval.type) = S_HEX; }
#line 1717 "kconfig/parser.tab.c"
    break;

  case 51:
#line 313 "kconfig/parser.y"
    { (yyval.type) = S_STRING; }
#line 1723 "kconfig/parser.tab.c"
    break;

  case 52:
#line 316 "kconfig/parser.y"
    { (yyval.type) = S_UNKNOWN; }
#line 1729 "kconfig/parser.tab.c"
    break;

  case 53:
#line 317 "kconfig/parser.y"
    { (yyval.type) = S_BOOLEAN; }
#line 1735 "kconfig/parser.tab.c"
    break;

  case 54:
#line 318 "kconfig/parser.y"
    { (yyval.type) = S_TRISTATE; }
#line 1741 "kconfig/parser.tab.c"
    break;

  case 55:
#line 323 "kconfig/parser.y"
    {
	printd(DEBUG_PARSE, "%s:%d:if\n", cur_filename, cur_lineno);
	menu_add_entry(NULL, M_IF);
	menu_add_dep((yyvsp[-1].expr));
	(yyval.menu) = menu_add_menu();
}
#line 1752 "kconfig/parser.tab.c"
    break;

  case 56:
#line 331 "kconfig/parser.y"
    {
	if (zconf_endtoken((yyvsp[0].string), "if")) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endif\n", cur_filename, cur_lineno);
	}
}
#line 1763 "kconfig/parser.tab.c"
    break;

  case 59:
#line 347 "kconfig/parser.y"
    {
	menu_add_entry(NULL, M_MENU);
	menu_add_prompt(P_MENU, (yyvsp[-1].string), NULL);
	printd(DEBUG_PARSE, "%s:%d:menu\n", cur_filename, cur_lineno);
}
#line 1773 "kconfig/parser.tab.c"
    break;

  case 60:
#line 354 "kconfig/parser.y"
    {
	(yyval.menu) = menu_add_menu();
}
#line 1781 "kconfig/parser.tab.c"
    break;

  case 61:
#line 359 "kconfig/parser.y"
    {
	if (zconf_endtoken((yyvsp[0].string), "menu")) {
		menu_end_menu();
		printd(DEBUG_PARSE, "%s:%d:endmenu\n", cur_filename, cur_lineno);
	}
}
#line 1792 "kconfig/parser.tab.c"
    break;

  case 66:
#line 376 "kconfig/parser.y"
    {
	printd(DEBUG_PARSE, "%s:%d:source %s\n", cur_filename, cur_lineno, (yyvsp[-1].string));
	zconf_nextfile((yyvsp[-1].string));
	free((yyvsp[-1].string));
}
#line 1802 "kconfig/parser.tab.c"
    break;

  case 67:
#line 385 "kconfig/parser.y"
    {
	menu_add_entry(NULL, M_COMMENT);
	menu_add_prompt(P_COMMENT, (yyvsp[-1].string), NULL);
	printd(DEBUG_PARSE, "%s:%d:comment\n", cur_filename, cur_lineno);
}
#line 1812 "kconfig/parser.tab.c"
    break;

  case 71:
#line 402 "kconfig/parser.y"
    {
	printd(DEBUG_PARSE, "%s:%d:help\n", cur_filename, cur_lineno);
	zconf_starthelp();
}
#line 1821 "kconfig/parser.tab.c"
    break;

  case 72:
#line 408 "kconfig/parser.y"
    {
	if (current_entry->help) {
		free(current_entry->help);
		zconf_error("'%s' defined with more than one help text",
			    current_entry->sym->name ?: "<choice>");
	}

	/* Is the help text empty or all whitespace? */
	if ((yyvsp[0].string)[strspn((yyvsp[0].string), " \f\n\r\t\v")] == '\0')
		zconf_error("'%s' defined with blank help text",
			    current_entry->sym->name ?: "<choice>");

	current_entry->help = (yyvsp[0].string);
}
#line 1840 "kconfig/parser.tab.c"
    break;

  case 73:
#line 426 "kconfig/parser.y"
    {
	menu_add_dep((yyvsp[-1].expr));
	printd(DEBUG_PARSE, "%s:%d:depends on\n", cur_filename, cur_lineno);
}
#line 1849 "kconfig/parser.tab.c"
    break;

  case 74:
#line 433 "kconfig/parser.y"
    {
	menu_add_visibility((yyvsp[-1].expr));
}
#line 1857 "kconfig/parser.tab.c"
    break;

  case 76:
#line 442 "kconfig/parser.y"
    {
	menu_add_prompt(P_PROMPT, (yyvsp[-1].string), (yyvsp[0].expr));
}
#line 1865 "kconfig/parser.tab.c"
    break;

  case 77:
#line 446 "kconfig/parser.y"
    { (yyval.string) = "menu"; }
#line 1871 "kconfig/parser.tab.c"
    break;

  case 78:
#line 447 "kconfig/parser.y"
    { (yyval.string) = "choice"; }
#line 1877 "kconfig/parser.tab.c"
    break;

  case 79:
#line 448 "kconfig/parser.y"
    { (yyval.string) = "if"; }
#line 1883 "kconfig/parser.tab.c"
    break;

  case 80:
#line 451 "kconfig/parser.y"
    { (yyval.expr) = NULL; }
#line 1889 "kconfig/parser.tab.c"
    break;

  case 81:
#line 452 "kconfig/parser.y"
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1895 "kconfig/parser.tab.c"
    break;

  case 82:
#line 455 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_symbol((yyvsp[0].symbol)); }
#line 1901 "kconfig/parser.tab.c"
    break;

  case 83:
#line 456 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_comp(E_LTH, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
#line 1907 "kconfig/parser.tab.c"
    break;

  case 84:
#line 457 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_comp(E_LEQ, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
#line 1913 "kconfig/parser.tab.c"
    break;

  case 85:
#line 458 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_comp(E_GTH, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
#line 1919 "kconfig/parser.tab.c"
    break;

  case 86:
#line 459 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_comp(E_GEQ, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
#line 1925 "kconfig/parser.tab.c"
    break;

  case 87:
#line 460 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_comp(E_EQUAL, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
#line 1931 "kconfig/parser.tab.c"
    break;

  case 88:
#line 461 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_comp(E_UNEQUAL, (yyvsp[-2].symbol), (yyvsp[0].symbol)); }
#line 1937 "kconfig/parser.tab.c"
    break;

  case 89:
#line 462 "kconfig/parser.y"
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1943 "kconfig/parser.tab.c"
    break;

  case 90:
#line 463 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_one(E_NOT, (yyvsp[0].expr)); }
#line 1949 "kconfig/parser.tab.c"
    break;

  case 91:
#line 464 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_two(E_OR, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1955 "kconfig/parser.tab.c"
    break;

  case 92:
#line 465 "kconfig/parser.y"
    { (yyval.expr) = expr_alloc_two(E_AND, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1961 "kconfig/parser.tab.c"
    break;

  case 93:
#line 469 "kconfig/parser.y"
    { (yyval.symbol) = sym_lookup((yyvsp[0].string), 0); free((yyvsp[0].string)); }
#line 1967 "kconfig/parser.tab.c"
    break;

  case 95:
#line 472 "kconfig/parser.y"
    { (yyval.symbol) = sym_lookup((yyvsp[0].string), SYMBOL_CONST); free((yyvsp[0].string)); }
#line 1973 "kconfig/parser.tab.c"
    break;

  case 96:
#line 477 "kconfig/parser.y"
    { variable_add((yyvsp[-3].string), (yyvsp[-1].string), (yyvsp[-2].flavor)); free((yyvsp[-3].string)); free((yyvsp[-1].string)); }
#line 1979 "kconfig/parser.tab.c"
    break;

  case 97:
#line 480 "kconfig/parser.y"
    { (yyval.flavor) = VAR_RECURSIVE; }
#line 1985 "kconfig/parser.tab.c"
    break;

  case 98:
#line 481 "kconfig/parser.y"
    { (yyval.flavor) = VAR_SIMPLE; }
#line 1991 "kconfig/parser.tab.c"
    break;

  case 99:
#line 482 "kconfig/parser.y"
    { (yyval.flavor) = VAR_APPEND; }
#line 1997 "kconfig/parser.tab.c"
    break;

  case 100:
#line 486 "kconfig/parser.y"
    { (yyval.string) = xstrdup(""); }
#line 2003 "kconfig/parser.tab.c"
    break;


#line 2007 "kconfig/parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 490 "kconfig/parser.y"


/**
 * transitional_check_sanity - check transitional symbols have no other
 *			       properties
 *
 * @menu: menu of the potentially transitional symbol
 *
 * Return: -1 if an error is found, 0 otherwise.
 */
static int transitional_check_sanity(const struct menu *menu)
{
	struct property *prop;

	if (!menu->sym || !(menu->sym->flags & SYMBOL_TRANS))
		return 0;

	/* Check for depends and visible conditions. */
	if ((menu->dep && !expr_is_yes(menu->dep)) ||
	    (menu->visibility && !expr_is_yes(menu->visibility))) {
		fprintf(stderr, "%s:%d: error: %s",
			menu->filename, menu->lineno,
			"transitional symbols can only have help sections\n");
		return -1;
	}

	/* Check for any property other than "help". */
	for (prop = menu->sym->prop; prop; prop = prop->next) {
		if (prop->type != P_COMMENT) {
			fprintf(stderr, "%s:%d: error: %s",
				prop->filename, prop->lineno,
				"transitional symbols can only have help sections\n");
			return -1;
		}
	}

	return 0;
}

/**
 * choice_check_sanity - check sanity of a choice member
 *
 * @menu: menu of the choice member
 *
 * Return: -1 if an error is found, 0 otherwise.
 */
static int choice_check_sanity(const struct menu *menu)
{
	struct property *prop;
	int ret = 0;

	for (prop = menu->sym->prop; prop; prop = prop->next) {
		if (prop->type == P_DEFAULT) {
			fprintf(stderr, "%s:%d: error: %s",
				prop->filename, prop->lineno,
				"defaults for choice values not supported\n");
			ret = -1;
		}

		if (prop->menu != menu && prop->type == P_PROMPT &&
		    prop->menu->parent != menu->parent) {
			fprintf(stderr, "%s:%d: error: %s",
				prop->filename, prop->lineno,
				"choice value has a prompt outside its choice group\n");
			ret = -1;
		}
	}

	return ret;
}

void conf_parse(const char *name)
{
	struct menu *menu;

	autoconf_cmd = str_new();

	str_printf(&autoconf_cmd, "\ndeps_config := \\\n");

	zconf_initscan(name);

	_menu_init();

	if (getenv("ZCONF_DEBUG"))
		yydebug = 1;
	yyparse();

	str_printf(&autoconf_cmd,
		   "\n"
		   "$(autoconfig): $(deps_config)\n"
		   "$(deps_config): ;\n");

	env_write_dep(&autoconf_cmd);

	/* Variables are expanded in the parse phase. We can free them here. */
	variable_all_del();

	if (yynerrs)
		exit(1);
	if (!modules_sym)
		modules_sym = &symbol_no;

	if (!menu_has_prompt(&rootmenu)) {
		current_entry = &rootmenu;
		menu_add_prompt(P_MENU, "Main menu", NULL);
	}

	menu_finalize();

	menu_for_each_entry(menu) {
		struct menu *child;

		if (menu->sym && sym_check_deps(menu->sym))
			yynerrs++;

		if (transitional_check_sanity(menu))
			yynerrs++;

		if (menu->sym && sym_is_choice(menu->sym)) {
			menu_for_each_sub_entry(child, menu)
				if (child->sym && choice_check_sanity(child))
					yynerrs++;
		}
	}

	if (yynerrs)
		exit(1);
	conf_set_changed(true);
}

static bool zconf_endtoken(const char *tokenname,
			   const char *expected_tokenname)
{
	if (strcmp(tokenname, expected_tokenname)) {
		zconf_error("unexpected '%s' within %s block",
			    tokenname, expected_tokenname);
		yynerrs++;
		return false;
	}
	if (strcmp(current_menu->filename, cur_filename)) {
		zconf_error("'%s' in different file than '%s'",
			    tokenname, expected_tokenname);
		fprintf(stderr, "%s:%d: location of the '%s'\n",
			current_menu->filename, current_menu->lineno,
			expected_tokenname);
		yynerrs++;
		return false;
	}
	return true;
}

static void zconf_error(const char *err, ...)
{
	va_list ap;

	yynerrs++;
	fprintf(stderr, "%s:%d: ", cur_filename, cur_lineno);
	va_start(ap, err);
	vfprintf(stderr, err, ap);
	va_end(ap);
	fprintf(stderr, "\n");
}

static void yyerror(const char *err)
{
	fprintf(stderr, "%s:%d: %s\n", cur_filename, cur_lineno, err);
}

static void print_quoted_string(FILE *out, const char *str)
{
	const char *p;
	int len;

	putc('"', out);
	while ((p = strchr(str, '"'))) {
		len = p - str;
		if (len)
			fprintf(out, "%.*s", len, str);
		fputs("\\\"", out);
		str = p + 1;
	}
	fputs(str, out);
	putc('"', out);
}

static void print_symbol(FILE *out, const struct menu *menu)
{
	struct symbol *sym = menu->sym;
	struct property *prop;

	if (sym_is_choice(sym))
		fprintf(out, "\nchoice\n");
	else
		fprintf(out, "\nconfig %s\n", sym->name);
	switch (sym->type) {
	case S_BOOLEAN:
		fputs("  bool\n", out);
		break;
	case S_TRISTATE:
		fputs("  tristate\n", out);
		break;
	case S_STRING:
		fputs("  string\n", out);
		break;
	case S_INT:
		fputs("  integer\n", out);
		break;
	case S_HEX:
		fputs("  hex\n", out);
		break;
	default:
		fputs("  ???\n", out);
		break;
	}
	for (prop = sym->prop; prop; prop = prop->next) {
		if (prop->menu != menu)
			continue;
		switch (prop->type) {
		case P_PROMPT:
			fputs("  prompt ", out);
			print_quoted_string(out, prop->text);
			if (!expr_is_yes(prop->visible.expr)) {
				fputs(" if ", out);
				expr_fprint(prop->visible.expr, out);
			}
			fputc('\n', out);
			break;
		case P_DEFAULT:
			fputs( "  default ", out);
			expr_fprint(prop->expr, out);
			if (!expr_is_yes(prop->visible.expr)) {
				fputs(" if ", out);
				expr_fprint(prop->visible.expr, out);
			}
			fputc('\n', out);
			break;
		case P_SELECT:
			fputs( "  select ", out);
			expr_fprint(prop->expr, out);
			fputc('\n', out);
			break;
		case P_IMPLY:
			fputs( "  imply ", out);
			expr_fprint(prop->expr, out);
			fputc('\n', out);
			break;
		case P_RANGE:
			fputs( "  range ", out);
			expr_fprint(prop->expr, out);
			fputc('\n', out);
			break;
		case P_MENU:
			fputs( "  menu ", out);
			print_quoted_string(out, prop->text);
			fputc('\n', out);
			break;
		default:
			fprintf(out, "  unknown prop %d!\n", prop->type);
			break;
		}
	}
	if (menu->help) {
		int len = strlen(menu->help);
		while (menu->help[--len] == '\n')
			menu->help[len] = 0;
		fprintf(out, "  help\n%s\n", menu->help);
	}
}

void zconfdump(FILE *out)
{
	struct property *prop;
	struct symbol *sym;
	struct menu *menu;

	menu = rootmenu.list;
	while (menu) {
		if ((sym = menu->sym))
			print_symbol(out, menu);
		else if ((prop = menu->prompt)) {
			switch (prop->type) {
			case P_COMMENT:
				fputs("\ncomment ", out);
				print_quoted_string(out, prop->text);
				fputs("\n", out);
				break;
			case P_MENU:
				fputs("\nmenu ", out);
				print_quoted_string(out, prop->text);
				fputs("\n", out);
				break;
			default:
				;
			}
			if (!expr_is_yes(prop->visible.expr)) {
				fputs("  depends ", out);
				expr_fprint(prop->visible.expr, out);
				fputc('\n', out);
			}
		}

		if (menu->list)
			menu = menu->list;
		else if (menu->next)
			menu = menu->next;
		else while ((menu = menu->parent)) {
			if (menu->prompt && menu->prompt->type == P_MENU)
				fputs("\nendmenu\n", out);
			if (menu->next) {
				menu = menu->next;
				break;
			}
		}
	}
}
