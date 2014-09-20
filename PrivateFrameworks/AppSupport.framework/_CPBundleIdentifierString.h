/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;

@interface _CPBundleIdentifierString : NSString  {
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    bool_isProcessName;
}


- (bool)_isProcessName;
- (id)_initWithExecutablePath:(id)arg1;
- (void)_loadBundleIdentifierOrProcessName;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;

@end