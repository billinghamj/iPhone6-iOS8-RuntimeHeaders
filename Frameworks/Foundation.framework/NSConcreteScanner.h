/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner  {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { 
        unsigned int caseSensitive : 1; 
        unsigned int  : 31; 
    } flags;
}


- (unsigned long long)scanLocation;
- (void)finalize;
- (bool)scanLongLong:(long long*)arg1;
- (void)setCharactersToBeSkipped:(id)arg1;
- (bool)scanInt:(int*)arg1;
- (void)setCaseSensitive:(bool)arg1;
- (id)locale;
- (void)setScanLocation:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)string;
- (void)dealloc;
- (id)_invertedSkipSet;
- (bool)caseSensitive;
- (id)charactersToBeSkipped;

@end
