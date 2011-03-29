//
//  IFFilterOperation.h
//  ImageFilterKit
//
//  Created by Andy Roth on 3/29/11.
//  Copyright 2011 Resource Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IFFilter.h"


@interface IFFilterOperation : NSOperation
{
    IFFilter *filter;
	id <IFFilterDelegate> delegate;
}

@property (nonatomic, retain) IFFilter *filter;
@property (nonatomic, assign) id <IFFilterDelegate> delegate;

@end
