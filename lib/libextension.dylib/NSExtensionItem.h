/* Generated by RuntimeBrowser.
   Image: /usr/lib/libextension.dylib
 */

@class NSArray, NSMutableDictionary, NSDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property(copy) NSAttributedString * attributedTitle;
@property(copy) NSAttributedString * attributedContentText;
@property(copy) NSArray * attachments;
@property(copy) NSDictionary * userInfo;

+ (bool)supportsSecureCoding;

- (id)_matchingDictionaryRepresentation;
- (void)setAttributedContentText:(id)arg1;
- (void)setAttachments:(id)arg1;
- (id)attachments;
- (id)attributedTitle;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInfo:(id)arg1;
- (id)description;
- (void)setAttributedTitle:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)attributedContentText;

@end
