/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCountedSet : NSMutableSet  {
    id _table;
    void *_reserved;
}

+ (bool)supportsSecureCoding;

- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithArray:(id)arg1;
- (id)objectEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;

@end