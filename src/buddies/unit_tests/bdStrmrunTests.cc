
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#include "tlUnitTest.h"
#include "tlStream.h"
#include "tlFileUtils.h"

//  Testing the converter main implementation (CIF)
TEST(1)
{
  std::string fp (tl::testsrc ());
  fp += "/testdata/bd/strmrun.py";

  std::string path = tl::combine_path (".", "strmrun ") + fp;
  tl::InputPipe pipe (path);
  tl::InputStream is (pipe);
  std::string data = is.read_all ();

  EXPECT_EQ (data, "Hello, world (0,-42;42,0)!\n");
}
