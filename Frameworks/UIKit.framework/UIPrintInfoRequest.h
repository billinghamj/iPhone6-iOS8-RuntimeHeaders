/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PKPrinter;

@interface UIPrintInfoRequest : NSObject  {
    PKPrinter *_printer;
    int _requestState;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property int requestState;
@property(copy) id completionHandler;

+ (id)requestInfoForPrinter:(id)arg1;

- (void)setCompletionHandler:(id)arg1;
- (void)setRequestState:(int)arg1;
- (int)requestState;
- (void)requestPrintInfo;
- (id)completionHandler;
- (void)dealloc;

@end