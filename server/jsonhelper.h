/*

 Copyright (C) 2012 Grame

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

 Grame Research Laboratory, 9 rue du Garet, 69001 Lyon - France
 research@grame.fr

 */

#ifndef __jsonhelper__
#define __jsonhelper__

#include <string>
#include "GUIDOEngine.h"
#include "GUIDOScoreMap.h"
#include "json.h"

using namespace std;

namespace guidohttpd
{

void GUIDOjson_print_date (json_printer *printer, const char* key, int num, int denom);
void GUIDOjson_print_float_rect (json_printer *printer, const char* key, float left, float right, float top, float bottom);

} // end namespoace

#endif