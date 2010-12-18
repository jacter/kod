//
//  NoodleLineNumberView.h
//  NoodleKit
//
//  Created by Paul Kim on 9/28/08.
//  Copyright (c) 2008 Noodlesoft, LLC. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person
// obtaining a copy of this software and associated documentation
// files (the "Software"), to deal in the Software without
// restriction, including without limitation the rights to use,
// copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following
// conditions:
// 
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//

#import <Cocoa/Cocoa.h>

/*
 Displays line numbers for an NSTextView.
 
 For more details, see the related blog post at:
 noodlesoft.com/blog/2008/10/05/displaying-line-numbers-with-nstextview/
 */

@class KLineNumberMarker, KTabContents;

@interface KMetaRulerView : NSRulerView
{
  __weak KTabContents *tabContents_; // owns us
  NSDictionary *textAttributes_;
  NSColor *backgroundColor_;
  NSColor *dividerColor_;
  CGFloat dividerWidth_;
	NSMutableDictionary	*markers_;
}

- (id)initWithScrollView:(NSScrollView *)aScrollView
             tabContents:(KTabContents*)tabContents;

- (CGFloat)requiredThickness;
- (KLineNumberMarker *)markerAtLine:(NSUInteger)line;

- (void)linesDidChangeWithLineCountDelta:(NSInteger)lineCountDelta;

@end
