/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString, <MTLDevice>;

@interface _MTLDebugCommandEncoder : _MTLCommandEncoder <MTLDebugCommandEncoder> {
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) <MTLDevice> * device;
@property(copy) NSString * label;


- (void)IOLog:(id)arg1;
- (void)kprintf:(id)arg1;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
