/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState  {
    MTLSamplerDescriptor *_descriptor;
}

@property(copy,readonly) MTLSamplerDescriptor * descriptor;


- (id)descriptor;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end