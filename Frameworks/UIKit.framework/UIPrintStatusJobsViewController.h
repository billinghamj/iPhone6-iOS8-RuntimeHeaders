/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIPrintingMessageView;

@interface UIPrintStatusJobsViewController : UITableViewController  {
    NSArray *_jobs;
    bool_autoPush;
    UIPrintingMessageView *_noJobsView;
}


- (void)handleJobListDidChange;
- (void)pushSingleJobAnimated:(bool)arg1;
- (void)updateJobInfo:(id)arg1;
- (void)updateForJobCountChange;
- (void)updateTableViewCell:(id)arg1 withJob:(id)arg2;
- (id)visibleJobs;
- (void)pushJob:(id)arg1 animated:(bool)arg2;
- (void)willReappear;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;

@end