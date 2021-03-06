/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

@property(copy) NSString * name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)finalize;
- (id)name;
- (void)setName:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)description;
- (id)init;
- (void)dealloc;
- (bool)isLocking;
- (bool)lockBeforeDate:(id)arg1;
- (bool)tryLock;

@end
