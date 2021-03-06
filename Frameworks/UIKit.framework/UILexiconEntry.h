/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UILexiconEntry : NSObject <NSCopying> {
    NSString *_userInput;
    NSString *_documentText;
}

@property(readonly) NSString * documentText;
@property(readonly) NSString * userInput;

+ (id)_entryWithTILexiconEntry:(id)arg1;

- (id)documentText;
- (id)userInput;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
