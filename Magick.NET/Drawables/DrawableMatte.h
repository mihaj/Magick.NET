//=================================================================================================
// Copyright 2013 Dirk Lemstra <http://magick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
#pragma once

#include "DrawableWrapper.h"
#include "..\Enums\PaintMethod.h"

namespace ImageMagick
{
	///=============================================================================================
	///<summary>
	/// Encapsulation of the DrawableMatte object.
	///</summary>
	public ref class DrawableMatte sealed : DrawableWrapper<Magick::DrawableMatte>
	{
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Creates a new DrawableMatte instance.
		///</summary>
		///<param name="x">The X coordinate.</param>
		///<param name="y">The Y coordinate.</param>
		///<param name="paintMethod">The paint method to use.</param>
		DrawableMatte(double x, double y, PaintMethod paintMethod);
		///==========================================================================================
		///<summary>
		/// The PaintMethod to use.
		///</summary>
		property PaintMethod PaintMethod
		{
			ImageMagick::PaintMethod get()
			{
				return (ImageMagick::PaintMethod)Value->paintMethod();
			}
			void set(ImageMagick::PaintMethod value)
			{
				Value->paintMethod((Magick::PaintMethod)value);
			}
		}
		///==========================================================================================
		///<summary>
		/// The X coordinate.
		///</summary>
		property double X
		{
			double get()
			{
				return Value->x();
			}
			void set(double value)
			{
				Value->x(value);
			}
		}
		///==========================================================================================
		///<summary>
		/// The Y coordinate.
		///</summary>
		property double Y
		{
			double get()
			{
				return Value->y();
			}
			void set(double value)
			{
				Value->y(value);
			}
		}
		//===========================================================================================
	};
	//==============================================================================================
}