/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSSet;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings  {
}

@property double preferredLevel;
@property long long preferredInterfaceOrientation;
@property(copy) NSSet * occlusions;

+ (bool)_isMutable;

- (void)setPreferredInterfaceOrientation:(long long)arg1;
- (void)setPreferredLevel:(double)arg1;
- (void)setOcclusions:(id)arg1;
- (id)otherSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end