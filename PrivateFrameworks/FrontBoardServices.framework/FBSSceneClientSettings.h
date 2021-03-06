/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSSet, BSSettings;

@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying> {
    double _preferredLevel;
    long long _preferredInterfaceOrientation;
    NSSet *_occlusions;
    BSSettings *_otherSettings;
}

@property(readonly) double preferredLevel;
@property(readonly) long long preferredInterfaceOrientation;
@property(copy,readonly) NSSet * occlusions;

+ (bool)_isMutable;
+ (id)settings;

- (long long)preferredInterfaceOrientation;
- (double)preferredLevel;
- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (id)occlusions;
- (id)otherSettings;
- (id)initWithSettings:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (bool)isUISubclass;

@end
