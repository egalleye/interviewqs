import React from 'react';

class NameForm extends React.Component {
  constructor(props) {
    super(props);
    this.state = {value: ''};
    this.armory = {num: 0};

    this.handleChange = this.handleChange.bind(this);
    this.handleSubmit = this.handleSubmit.bind(this);
  }

  handleChange(event) {
    this.setState({value: event.target.value});
  }

  handleSubmit(event) {
    var it, innerit;
    var vals = this.state.value.split(" ");
    this.armory.num = vals[0];
    for (it = 1; it <= this.armory.num; it++) {
        var word = "";
        var firsthalf = "";
        var secondhalf = "";
        word = vals[it];
    
        for (innerit = 0; innerit < word.length; innerit++) {
            if ((innerit % 2) == 0) {
                firsthalf += word[innerit];
            }
        }
        for (innerit = 0; innerit < word.length; innerit++) {
            if ((innerit % 2) == 1) {
                secondhalf += word[innerit];
            }
        }
        console.log(firsthalf + " " + secondhalf);
    }
    
    
    event.preventDefault();
  }

  render() {
    return (
      <form onSubmit={this.handleSubmit}>
        <label>
          Name:
          <input type="text" value={this.state.value} onChange={this.handleChange} />
        </label>
        <input type="submit" value="Submit" />
      </form>
    );
  }
}

export default NameForm;
