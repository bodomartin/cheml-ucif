/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : cif.g
 *     -                            On : 2012-01-10 13:13:16
 *     -                for the parser : cifParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser
cifParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pcifParser, which is returned from a call to cifParserNew().
 *
 * The methods in pcifParser are  as follows:
 *
 *  -
 void
      pcifParser->parse(pcifParser)
 *  -
 void
      pcifParser->cif(pcifParser)
 *  -
 void
      pcifParser->loop_body(pcifParser)
 *  -
 void
      pcifParser->save_frame(pcifParser)
 *  -
 void
      pcifParser->data_items(pcifParser)
 *  -
 void
      pcifParser->data_block(pcifParser)
 *  -
 void
      pcifParser->loop_header(pcifParser)
 *  -
 cifParser_value_return
      pcifParser->value(pcifParser)
 *  -
 void
      pcifParser->char_string(pcifParser)
 *  -
 void
      pcifParser->text_field(pcifParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef _cifParser_H
#define _cifParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#include <string>
#include <ucif/builder.h>


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct cifParser_Ctx_struct cifParser, * pcifParser;



#ifdef  ANTLR3_WINDOWS
// Disable: Unreferenced parameter,                                                     - Rules with parameters that are not used
//          constant conditional,                                                       - ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable                                     - tree rewrite variables declared but not needed
//          Unreferenced local variable                                         - lexer rule declares but does not always use _type
//          potentially unitialized variable used                       - retval always returned from a rule
//                      unreferenced local function has been removed    - susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct cifParser_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    cifParser_value_return;





/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the parse scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  cifParser_parsePush().
 */
typedef struct  cifParser_parse_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)        (struct cifParser_parse_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    ucif::builder_base* builder;
    bool strict;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    cifParser_parse_SCOPE, * pcifParser_parse_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the data_items scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  cifParser_data_itemsPush().
 */
typedef struct  cifParser_data_items_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)        (struct cifParser_data_items_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    ucif::array_wrapper_base* curr_loop_values;
    ucif::array_wrapper_base* curr_loop_headers;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    cifParser_data_items_SCOPE, * pcifParser_data_items_SCOPE;


/** Context tracking structure for
cifParser

 */
struct cifParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  parse stack for use by pcifParser_parsePush()
     *  and pcifParser_parsePop()
     */
    pANTLR3_STACK pcifParser_parseStack;
    ANTLR3_UINT32 pcifParser_parseStack_limit;
    pcifParser_parse_SCOPE   (*pcifParser_parsePush)(struct cifParser_Ctx_struct * ctx);
    pcifParser_parse_SCOPE   pcifParser_parseTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  data_items stack for use by pcifParser_data_itemsPush()
     *  and pcifParser_data_itemsPop()
     */
    pANTLR3_STACK pcifParser_data_itemsStack;
    ANTLR3_UINT32 pcifParser_data_itemsStack_limit;
    pcifParser_data_items_SCOPE   (*pcifParser_data_itemsPush)(struct cifParser_Ctx_struct * ctx);
    pcifParser_data_items_SCOPE   pcifParser_data_itemsTop;




     void
     (*parse)   (struct cifParser_Ctx_struct * ctx, ucif::builder_base* builder_, bool strict_);

     void
     (*cif)     (struct cifParser_Ctx_struct * ctx);

     void
     (*loop_body)       (struct cifParser_Ctx_struct * ctx);

     void
     (*save_frame)      (struct cifParser_Ctx_struct * ctx);

     void
     (*data_items)      (struct cifParser_Ctx_struct * ctx);

     void
     (*data_block)      (struct cifParser_Ctx_struct * ctx);

     void
     (*loop_header)     (struct cifParser_Ctx_struct * ctx);

     cifParser_value_return
     (*value)   (struct cifParser_Ctx_struct * ctx);

     void
     (*char_string)     (struct cifParser_Ctx_struct * ctx);

     void
     (*text_field)      (struct cifParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct cifParser_Ctx_struct * ctx);
    void            (*free)   (struct cifParser_Ctx_struct * ctx);

      ucif::array_wrapper_base* errors;

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pcifParser cifParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pcifParser cifParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef  EOF
#undef  EOF
#endif
#ifdef  Tokens
#undef  Tokens
#endif
#define EOF      -1
#define T__37      37
#define ANY_PRINT_CHAR      4
#define CHAR_STRING      5
#define COMMENTS      6
#define DATA_      7
#define DATA_BLOCK_HEADING      8
#define DIGIT      9
#define DOUBLE_QUOTE      10
#define DOUBLE_QUOTED_STRING      11
#define EOL      12
#define EXPONENT      13
#define FLOAT      14
#define GLOBAL_      15
#define INAPPLICABLE      16
#define INTEGER      17
#define LOOP_      18
#define NON_BLANK_CHAR      19
#define NON_BLANK_CHAR_      20
#define NUMBER      21
#define NUMERIC      22
#define ORDINARY_CHAR      23
#define SAVE      24
#define SAVE_      25
#define SAVE_FRAME_HEADING      26
#define SEMI_COLON_TEXT_FIELD      27
#define SINGLE_QUOTE      28
#define SINGLE_QUOTED_STRING      29
#define STOP_      30
#define TAG      31
#define TEXT_LEAD_CHAR      32
#define UNKNOWN      33
#define UNQUOTED_STRING      34
#define UNSIGNED_INTEGER      35
#define WHITESPACE      36
#ifdef  EOF
#undef  EOF
#define EOF     ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for cifParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
