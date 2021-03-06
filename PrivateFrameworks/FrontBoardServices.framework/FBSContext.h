/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSString;

@interface FBSContext : NSObject <BSXPCCoding> {
    unsigned int _identifier;
    double _level;
}

@property(readonly) unsigned int identifier;
@property(readonly) double level;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)contextWithSceneContext:(id)arg1;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (double)level;
- (unsigned int)identifier;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
