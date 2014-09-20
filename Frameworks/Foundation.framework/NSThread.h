/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSMutableDictionary;

@interface NSThread : NSObject  {
    id _private;
    unsigned char _bytes[44];
}

@property(retain,readonly) NSMutableDictionary * threadDictionary;
@property double threadPriority;
@property long long qualityOfService;
@property(copy) NSString * name;
@property unsigned long long stackSize;
@property(readonly) bool isMainThread;
@property(getter=isExecuting,readonly) bool executing;
@property(getter=isFinished,readonly) bool finished;
@property(getter=isCancelled,readonly) bool cancelled;

+ (void)sleepUntilDate:(id)arg1;
+ (bool)setThreadPriority:(double)arg1;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (id)callStackSymbols;
+ (id)currentThread;
+ (bool)isMainThread;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)exit;
+ (bool)isMultiThreaded;
+ (bool)isDying;
+ (double)threadPriority;
+ (id)mainThread;
+ (id)callStackReturnAddresses;
+ (void)_im_runBlock:(id)arg1;

- (void)setThreadPriority:(double)arg1;
- (id)runLoop;
- (void)setQualityOfService:(long long)arg1;
- (long long)qualityOfService;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)start;
- (bool)isCancelled;
- (id)threadDictionary;
- (id)name;
- (void)setName:(id)arg1;
- (bool)isMainThread;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)setStackSize:(unsigned long long)arg1;
- (unsigned long long)stackSize;
- (void)_nq:(id)arg1;
- (bool)isDying;
- (double)threadPriority;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(bool)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(bool)arg2;
- (void)__im_performBlock:(id)arg1 modes:(id)arg2;
- (void)__im_performBlock:(id)arg1;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2 modes:(id)arg3;

@end