/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long *_indexes;
    unsigned long long _length;
    void *_reserved;
}

@property(readonly) long long item;
@property(readonly) long long section;
@property(readonly) long long row;
@property(readonly) unsigned long long length;

+ (id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;

- (id)initWithIndex:(unsigned long long)arg1;
- (void)getIndexes:(unsigned long long*)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
- (long long)compare:(id)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)length;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)getIndexes:(unsigned long long*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)section;
- (long long)row;
- (long long)item;
- (id)dd_stringValue;

@end
