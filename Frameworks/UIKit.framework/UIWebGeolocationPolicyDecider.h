/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMapTable, NSMutableDictionary, NSMutableArray;

@interface UIWebGeolocationPolicyDecider : NSObject  {
    NSMutableDictionary *_sites;
    NSMutableArray *_challenges;
    NSMapTable *_activeChallenges;
}

+ (id)sharedPolicyDecider;
+ (void)initialize;

- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2;
- (void)clearAllCaches;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)_executeNextChallenge;
- (void)_load;
- (long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;
- (void)_save;
- (bool)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3;
- (void)clearCache;
- (id)_siteFile;
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(bool)arg2;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init;
- (void)dealloc;

@end
