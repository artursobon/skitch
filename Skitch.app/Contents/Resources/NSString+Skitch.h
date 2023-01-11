//
//  NSString+Drawing.h
//  SkitchKit
//
//  Created by Ken Ryall on 2/20/13.
//  Copyright 2014 Evernote Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR
@import CoreText;
#endif


@interface NSString (Skitch)

// Drawing

// Determine string size from a font name and size pair 
- (CGSize)sizeWithFont:(NSString*)fontName andSize:(CGFloat)fontSize;

// Determine string size from a Core Text font object 
- (CGSize)sizeWithCoreTextFont:(CTFontRef)coreTextFont;


// Draw string with a font name and size pair 
- (void)drawAtCGPoint:(CGContextRef)context atPoint:(CGPoint)textOrigin fontName:(NSString*)fontName fontSize:(CGFloat)fontSize textColor:(CGColorRef)textColor;

// Draw string with a font name and size pair 
- (void)drawAtCGPoint:(CGContextRef)context atPoint:(CGPoint)textOrigin fontName:(NSString*)fontName fontSize:(CGFloat)fontSize textColor:(CGColorRef)textColor rightJustify:(BOOL)rightJustify extras:(NSDictionary *)extras;

// Draw string with a Core Text font object 
- (void)drawAtCGPoint:(CGContextRef)context atPoint:(CGPoint)textOrigin coreTextFont:(CTFontRef)coreTextFont textColor:(CGColorRef)textColor;

// Draw string with a Core Text font object 
- (void)drawAtCGPoint:(CGContextRef)context atPoint:(CGPoint)textOrigin coreTextFont:(CTFontRef)coreTextFont textColor:(CGColorRef)textColor rightJustify:(BOOL)rightJustify extras:(NSDictionary *)extras;

+ (NSString *)skitch_stringWithNewUUID;
- (NSString *)skitch_sanitizedFilename;
- (NSString *)skitch_sanitizedTitleForURL;

@end
