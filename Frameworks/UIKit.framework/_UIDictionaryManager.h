/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIDictionaryManager : NSObject  {
    NSArray *_availableDefinitionDictionaries;
}

@property(readonly) NSArray * availableDefinitionDictionaries;

+ (id)assetManager;
+ (id)_filteredDictionaryIDs;
+ (void)initialize;

- (id)availableDefinitionDictionaries;
- (id)_availableDictionaryAssets;
- (id)_definitionValuesForTerm:(id)arg1;
- (id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(bool)arg1;
- (id)_availableDictionaryAssetsUsingRemoteInfo:(bool)arg1;
- (id)_currentlyAvailableDefinitionDictionaries;
- (bool)_hasDefinitionForTerm:(id)arg1;
- (id)init;
- (void)dealloc;

@end