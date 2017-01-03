// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 4 "parser.yy" // lalr1.cc:404
 /*** C/C++ Declarations ***/

#include <stdio.h>
#include <string>
#include <vector>

#include <expression.h>
#include <basic_expression.h>
#include <comparison_expression.h>
#include <complex_expression.h>


#line 49 "parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.hh"

// User implementation prologue.
#line 88 "parser.yy" // lalr1.cc:412


#include <driver.h>
#include <scanner.h>

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lex


#line 75 "parser.cc" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 36 "parser.yy" // lalr1.cc:479
namespace impalajit {
#line 161 "parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  Parser::Parser (class Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  Parser::~Parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  Parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  Parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  Parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  Parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  Parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  Parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  Parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  Parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  Parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  Parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  Parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  Parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  Parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  Parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  Parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  Parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  Parser::symbol_number_type
  Parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  Parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  Parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  Parser::stack_symbol_type&
  Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
            case 25: // constant

#line 83 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 414 "parser.cc" // lalr1.cc:614
        break;

      case 26: // variable

#line 83 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 421 "parser.cc" // lalr1.cc:614
        break;

      case 27: // atomexpr

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 428 "parser.cc" // lalr1.cc:614
        break;

      case 28: // powexpr

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 435 "parser.cc" // lalr1.cc:614
        break;

      case 29: // unaryexpr

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 442 "parser.cc" // lalr1.cc:614
        break;

      case 30: // mulexpr

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 449 "parser.cc" // lalr1.cc:614
        break;

      case 31: // addexpr

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 456 "parser.cc" // lalr1.cc:614
        break;

      case 32: // expr

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 463 "parser.cc" // lalr1.cc:614
        break;

      case 34: // atomcondition

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 470 "parser.cc" // lalr1.cc:614
        break;

      case 35: // booleanand

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 477 "parser.cc" // lalr1.cc:614
        break;

      case 36: // booleanor

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 484 "parser.cc" // lalr1.cc:614
        break;

      case 37: // ifstmt

#line 84 "parser.yy" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 491 "parser.cc" // lalr1.cc:614
        break;


      default:
        break;
    }
  }

#if YYDEBUG
  template <typename Base>
  void
  Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  Parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  Parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  Parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline Parser::state_type
  Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 44 "parser.yy" // lalr1.cc:741
{
    // initialize the initial location object
    yyla.location.begin.filename = yyla.location.end.filename = &driver.streamname;
}

#line 629 "parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 106 "parser.yy" // lalr1.cc:859
    {
	           double* v = (double*) malloc(sizeof(double));
	           *v = (yystack_[0].value.doubleVal);
		       (yylhs.value.node) = new ENConstant(v, driver.expressionContext.assembly);
	   		}
#line 743 "parser.cc" // lalr1.cc:859
    break;

  case 3:
#line 114 "parser.yy" // lalr1.cc:859
    {
		       	if (!driver.expressionContext.existsVariable(*(yystack_[0].value.stringVal))) 
		       	{
					error(yyla.location, std::string("Unknown variable \"") + *(yystack_[0].value.stringVal) + "\"");
					delete (yystack_[0].value.stringVal);
			   		YYERROR;
	       		}
	       		else 
	       		{
				   (yylhs.value.node) = new ENConstant( driver.expressionContext.getVariable(*(yystack_[0].value.stringVal)), driver.expressionContext.assembly );
				   delete (yystack_[0].value.stringVal);
	       		}
	   		}
#line 761 "parser.cc" // lalr1.cc:859
    break;

  case 4:
#line 130 "parser.yy" // lalr1.cc:859
    {
	       		(yylhs.value.node) = (yystack_[0].value.node);
		   	}
#line 769 "parser.cc" // lalr1.cc:859
    break;

  case 5:
#line 135 "parser.yy" // lalr1.cc:859
    {
		       	(yylhs.value.node) = (yystack_[0].value.node);
		   	}
#line 777 "parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 140 "parser.yy" // lalr1.cc:859
    {
		       	(yylhs.value.node) = new ENSQRT((yystack_[1].value.node), driver.expressionContext.assembly);
		   	}
#line 785 "parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 145 "parser.yy" // lalr1.cc:859
    {
		       	(yylhs.value.node) = (yystack_[1].value.node);
		   	}
#line 793 "parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 152 "parser.yy" // lalr1.cc:859
    {
	      		(yylhs.value.node) = (yystack_[0].value.node);
	  		}
#line 801 "parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 157 "parser.yy" // lalr1.cc:859
    {
	      		(yylhs.value.node) = new ENPower((yystack_[2].value.node), (yystack_[0].value.node), driver.expressionContext.assembly);
	  		}
#line 809 "parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 162 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = (yystack_[0].value.node);
			}
#line 817 "parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 167 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = (yystack_[0].value.node);
			}
#line 825 "parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 172 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new ENNegate((yystack_[0].value.node), driver.expressionContext.assembly);
			}
#line 833 "parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 177 "parser.yy" // lalr1.cc:859
    {
	      		(yylhs.value.node) = (yystack_[0].value.node);
		  	}
#line 841 "parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 182 "parser.yy" // lalr1.cc:859
    {
		      	(yylhs.value.node) = new ENMultiply((yystack_[2].value.node), (yystack_[0].value.node), driver.expressionContext.assembly);
		  	}
#line 849 "parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 187 "parser.yy" // lalr1.cc:859
    {
		  	    (yylhs.value.node) = new ENDivide((yystack_[2].value.node), (yystack_[0].value.node), driver.expressionContext.assembly);
		  	}
#line 857 "parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 193 "parser.yy" // lalr1.cc:859
    {
	      		(yylhs.value.node) = (yystack_[0].value.node);
		  	}
#line 865 "parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 198 "parser.yy" // lalr1.cc:859
    {
		      	(yylhs.value.node) = new ENAdd((yystack_[2].value.node), (yystack_[0].value.node), driver.expressionContext.assembly);
		  	}
#line 873 "parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 203 "parser.yy" // lalr1.cc:859
    {
		      	(yylhs.value.node) = new ENSubtract((yystack_[2].value.node), (yystack_[0].value.node), driver.expressionContext.assembly);
		  	}
#line 881 "parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 209 "parser.yy" // lalr1.cc:859
    {
	      		(yylhs.value.node) = (yystack_[0].value.node);
	  		}
#line 889 "parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 215 "parser.yy" // lalr1.cc:859
    {
		 /*driver.expressionContext.variables[*$1] = $3->evaluate();
		 delete $1;
		 delete $3;*/
	     }
#line 899 "parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 223 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new CNComparison((yystack_[2].value.node), (yystack_[0].value.node), (yystack_[1].value.integerVal), driver.expressionContext.assembly);
			}
#line 907 "parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 228 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = (yystack_[1].value.node);
			}
#line 915 "parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 234 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new BooleanJunctionNode((yystack_[2].value.node), (yystack_[0].value.node), (yystack_[1].value.integerVal), driver.expressionContext.assembly);
			}
#line 923 "parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 239 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new BooleanJunctionNode((yystack_[2].value.node), (yystack_[0].value.node), (yystack_[1].value.integerVal), driver.expressionContext.assembly);
			}
#line 931 "parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 247 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new BooleanJunctionNode((yystack_[0].value.node), driver.expressionContext.assembly);
			}
#line 939 "parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 252 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = (yystack_[0].value.node);
			}
#line 947 "parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 257 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new BooleanJunctionNode((yystack_[2].value.node), (yystack_[0].value.node), (yystack_[1].value.integerVal), driver.expressionContext.assembly);
			}
#line 955 "parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 262 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new BooleanJunctionNode((yystack_[2].value.node), (yystack_[0].value.node), (yystack_[1].value.integerVal), driver.expressionContext.assembly);
			}
#line 963 "parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 269 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new CxNIfStmt((yystack_[4].value.node), (yystack_[1].value.node), driver.expressionContext.assembly);
			}
#line 971 "parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 274 "parser.yy" // lalr1.cc:859
    {
				(yylhs.value.node) = new CxNIfElseStmt((yystack_[8].value.node), (yystack_[5].value.node), (yystack_[1].value.node), driver.expressionContext.assembly);
			}
#line 979 "parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 289 "parser.yy" // lalr1.cc:859
    {
		      	driver.expressionContext.expressions.push_back((yystack_[1].value.node));
		  	}
#line 987 "parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 294 "parser.yy" // lalr1.cc:859
    {
		      	driver.expressionContext.expressions.push_back((yystack_[1].value.node));
		  	}
#line 995 "parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 299 "parser.yy" // lalr1.cc:859
    {
		      	driver.expressionContext.expressions.push_back((yystack_[1].value.node));
		  	}
#line 1003 "parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 304 "parser.yy" // lalr1.cc:859
    {
				driver.expressionContext.expressions.push_back((yystack_[1].value.node));
			}
#line 1011 "parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 309 "parser.yy" // lalr1.cc:859
    {
				driver.expressionContext.expressions.push_back((yystack_[1].value.node));
			}
#line 1019 "parser.cc" // lalr1.cc:859
    break;


#line 1023 "parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char Parser::yypact_ninf_ = -16;

  const signed char Parser::yytable_ninf_ = -1;

  const signed char
  Parser::yypact_[] =
  {
     -16,     3,   -16,   -16,   -16,   -15,    10,    24,    22,    52,
      52,   -16,   -16,   -16,    37,   -16,   -16,    13,    33,     1,
       2,    12,    22,    22,    38,   -16,    27,   -16,   -16,    52,
      22,    22,    22,    22,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,    39,    38,    49,    55,    57,    20,   -16,   -16,
     -16,   -16,    13,    13,   -16,    48,    26,    22,    38,    38,
      38,    51,   -16,   -16,   -16,   -16,    55,    57,    22,    47,
      61,    53,    22,    54,   -16
  };

  const unsigned char
  Parser::yydefact_[] =
  {
      31,     0,     1,    33,     2,     3,     0,     0,     0,     0,
       0,    32,     4,     5,     8,    10,    13,    16,    19,     0,
       0,     0,     0,     0,     0,     3,     0,    11,    12,     0,
       0,     0,     0,     0,    38,    37,    36,    35,    34,    40,
      39,    20,     0,     0,     0,    25,    26,     0,     7,     9,
      14,    15,    17,    18,     6,     0,     0,     0,     0,     0,
       0,     0,    22,    21,    24,    23,    27,    28,     0,     0,
      29,     0,     0,     0,    30
  };

  const signed char
  Parser::yypgoto_[] =
  {
     -16,   -16,   -16,   -16,     4,   -13,    31,   -16,    -1,   -16,
     -12,    15,    30,   -16,   -16
  };

  const signed char
  Parser::yydefgoto_[] =
  {
      -1,    12,    13,    14,    15,    16,    17,    18,    44,    20,
      45,    46,    47,    21,     1
  };

  const unsigned char
  Parser::yytable_[] =
  {
      19,    34,    37,     2,    35,    22,     3,    26,     4,     5,
       6,     7,    39,    27,    28,    40,     8,    50,    51,     9,
      10,    41,    42,    23,    36,    38,    11,     4,    25,     6,
      60,    30,    31,    49,    61,     8,    60,    24,     9,    10,
      62,    48,    55,     4,    25,     6,    64,    65,    66,    32,
      33,    43,    29,    54,     9,    10,    63,     4,    25,     6,
      57,    57,    48,    52,    53,     8,    58,    69,    59,    70,
      71,    73,    68,    56,    72,    67,    74
  };

  const unsigned char
  Parser::yycheck_[] =
  {
       1,     0,     0,     0,     3,    20,     3,     8,     5,     6,
       7,     8,     0,     9,    10,     3,    13,    30,    31,    16,
      17,    22,    23,    13,    23,    23,    23,     5,     6,     7,
      10,    18,    19,    29,    14,    13,    10,    13,    16,    17,
      14,    14,    43,     5,     6,     7,    58,    59,    60,    16,
      17,    13,    15,    14,    16,    17,    57,     5,     6,     7,
      12,    12,    14,    32,    33,    13,    11,    68,    11,    22,
       9,    72,    21,    43,    21,    60,    22
  };

  const unsigned char
  Parser::yystos_[] =
  {
       0,    38,     0,     3,     5,     6,     7,     8,    13,    16,
      17,    23,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    37,    20,    13,    13,     6,    32,    28,    28,    15,
      18,    19,    16,    17,     0,     3,    23,     0,    23,     0,
       3,    32,    32,    13,    32,    34,    35,    36,    14,    28,
      29,    29,    30,    30,    14,    32,    36,    12,    11,    11,
      10,    14,    14,    32,    34,    34,    34,    35,    21,    32,
      22,     9,    21,    32,    22
  };

  const unsigned char
  Parser::yyr1_[] =
  {
       0,    24,    25,    26,    27,    27,    27,    27,    28,    28,
      29,    29,    29,    30,    30,    30,    31,    31,    31,    32,
      33,    34,    34,    35,    35,    36,    36,    36,    36,    37,
      37,    38,    38,    38,    38,    38,    38,    38,    38,    38,
      38
  };

  const unsigned char
  Parser::yyr2_[] =
  {
       0,     2,     1,     1,     1,     1,     4,     3,     1,     3,
       1,     2,     2,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     1,     3,     3,     7,
      11,     0,     2,     2,     3,     3,     3,     3,     3,     3,
       3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const Parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"end of line\"",
  "\"integer\"", "\"double\"", "\"string\"", "\"function\"",
  "\"if block\"", "\"else block\"", "\"or operator\"", "\"and operator\"",
  "\"compare operator\"", "'('", "')'", "'^'", "'+'", "'-'", "'*'", "'/'",
  "'='", "'{'", "'}'", "';'", "$accept", "constant", "variable",
  "atomexpr", "powexpr", "unaryexpr", "mulexpr", "addexpr", "expr",
  "assignment", "atomcondition", "booleanand", "booleanor", "ifstmt",
  "start", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  Parser::yyrline_[] =
  {
       0,   105,   105,   113,   129,   134,   139,   144,   151,   156,
     161,   166,   171,   176,   181,   186,   192,   197,   202,   208,
     214,   222,   227,   233,   238,   246,   251,   256,   261,   268,
     273,   279,   280,   282,   284,   286,   288,   293,   298,   303,
     308
  };

  // Print the state stack on the debug stream.
  void
  Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
  Parser::token_number_type
  Parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      13,    14,    18,    16,     2,    17,     2,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
       2,    20,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    15,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    21,     2,    22,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12
    };
    const unsigned int user_token_number_max_ = 267;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 36 "parser.yy" // lalr1.cc:1167
} // impalajit
#line 1488 "parser.cc" // lalr1.cc:1167
#line 315 "parser.yy" // lalr1.cc:1168
 /*** Additional Code ***/

void impalajit::Parser::error(const Parser::location_type& l,
							  const std::string& m)
{
	driver.error(l, m);
}
