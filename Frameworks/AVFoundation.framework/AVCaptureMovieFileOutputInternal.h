/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSMutableArray;

@interface AVCaptureMovieFileOutputInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    NSArray *metadata;
    } movieFragmentInterval;
    NSMutableArray *recordingDelegatesArray;
    BOOL sendLastVideoPreviewFrame;
}

- (void)dealloc;
- (id)init;

@end
