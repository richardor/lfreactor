// define namespace
// andycai.sc@gmail.com 2011-06-15
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//

#ifndef NAMESPACEDEFINE_H_INCLUDED
#define NAMESPACEDEFINE_H_INCLUDED

#define NAMESPACE_NAME LfReactor

#define BEGIN_CXX_NAMESPACE_DEFINITION namespace NAMESPACE_NAME {

#define END_CXX_NAMESPACE_DEFINITION }

#define INC_NAME_HEADER(PATH, HEADER) PATH/HEADER

#define QUOTE_HEADER(H) #H

#define ADD_QUOTE(H) QUOTE_HEADER(H)

#if defined(WIN32)
	#if defined(WIN_EXPORT)
		#define DYNAMIC_LIB __declspec(dllexport)
	#else
		#define DYNAMIC_LIB __declspec(dllimport)
	#endif
#else
	#define DYNAMIC_LIB
#endif

#endif // NAMESPACEDEFINE_H_INCLUDED
