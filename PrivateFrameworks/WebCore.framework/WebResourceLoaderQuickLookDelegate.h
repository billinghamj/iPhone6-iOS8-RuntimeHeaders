/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString;

@interface WebResourceLoaderQuickLookDelegate : NSObject <NSURLConnectionDelegate> {
    struct RefPtr<WebCore::ResourceLoader> { 
        struct ResourceLoader {} *m_ptr; 
    } _resourceLoader;
    bool_hasSentDidReceiveResponse;
    bool_hasFailed;
    struct QuickLookHandle { struct RetainPtr<NSURL> { void *x_1_1_1; } x1; struct RetainPtr<QLPreviewConverter> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; boolx4; struct RetainPtr<NSFileHandle *> { void *x_5_1_1; } x5; struct RetainPtr<NSURLResponse> { void *x_6_1_1; } x6; struct RefPtr<WebCore::QuickLookHandleClient> { struct QuickLookHandleClient {} *x_7_1_1; } x7; } *_quickLookHandle;
}

@property struct QuickLookHandle { struct RetainPtr<NSURL> { void *x_1_1_1; } x1; struct RetainPtr<QLPreviewConverter> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; boolx4; struct RetainPtr<NSFileHandle *> { void *x_5_1_1; } x5; struct RetainPtr<NSURLResponse> { void *x_6_1_1; } x6; struct RefPtr<WebCore::QuickLookHandleClient> { struct QuickLookHandleClient {} *x_7_1_1; } x7; }* quickLookHandle;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setQuickLookHandle:(struct QuickLookHandle { struct RetainPtr<NSURL> { void *x_1_1_1; } x1; struct RetainPtr<QLPreviewConverter> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; boolx4; struct RetainPtr<NSFileHandle *> { void *x_5_1_1; } x5; struct RetainPtr<NSURLResponse> { void *x_6_1_1; } x6; struct RefPtr<WebCore::QuickLookHandleClient> { struct QuickLookHandleClient {} *x_7_1_1; } x7; }*)arg1;
- (struct QuickLookHandle { struct RetainPtr<NSURL> { void *x_1_1_1; } x1; struct RetainPtr<QLPreviewConverter> { void *x_2_1_1; } x2; struct RetainPtr<id> { void *x_3_1_1; } x3; boolx4; struct RetainPtr<NSFileHandle *> { void *x_5_1_1; } x5; struct RetainPtr<NSURLResponse> { void *x_6_1_1; } x6; struct RefPtr<WebCore::QuickLookHandleClient> { struct QuickLookHandleClient {} *x_7_1_1; } x7; }*)quickLookHandle;
- (id)initWithResourceLoader:(struct PassRefPtr<WebCore::ResourceLoader> { struct ResourceLoader {} *x1; })arg1;
- (void)_sendDidReceiveResponseIfNecessary;
- (void)clearHandle;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveDataArray:(id)arg2;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id).cxx_construct;

@end